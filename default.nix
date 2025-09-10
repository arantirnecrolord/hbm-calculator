{ pkgs ? import <nixpkgs> {} }:

pkgs.stdenv.mkDerivation rec {
    pname = "hbm-calculator";
    version = "1.0.0";
    src = ./.;

    nativeBuildInputs = with pkgs; [ gcc gettext ];

    meta = with pkgs.lib; {
        description = "";
        license = licenses.mit;
    };

    buildPhase = ''
        mkdir -p locale/uk/LC_MESSAGES
        ${pkgs.gettext}/bin/msgfmt po/uk.po -o locale/uk/LC_MESSAGES/hbm-calculator.mo

        mkdir -p $out/bin
        gcc src/main.c -o hbm-calculator
    '';

    installPhase = ''
        mkdir -p $out/bin
        mkdir -p $out/share/locale/uk/LC_MESSAGES
        
        mv hbm-calculator $out/bin
        mv locale/uk/LC_MESSAGES/hbm-calculator.mo $out/share/locale/uk/LC_MESSAGES/
    '';
}