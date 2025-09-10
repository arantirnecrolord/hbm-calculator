#include <stdio.h>
#include <locale.h>
#include <libintl.h>
#include <stdlib.h>

#define _(STRING) gettext(STRING)

int select_component = 0;
int amount_component = 0;

int bolted_steel_plating(int i);
int heavy_framework(int i);
int extensive_circult_board(int i);
int radiation_resistant_plating(int i);
int reinforced_ferrouranium_panels(int i);
int bronze_structural_elements(int i);
int mainframe(int i);
int perfluoromethyl(int i);

int main() {
    setlocale(LC_ALL, "");
    textdomain("hbm-calculator");
    bindtextdomain("hbm-calculator", "./locale");

    printf(_("1. Bolted Steel Plating\n"));
    printf(_("2. Heavy Framework\n"));
    printf(_("3. Extensive Circuit Board\n"));
    printf(_("4. Radiation Resistant Plating\n"));
    printf(_("5. Reinforced Ferrouranium Panels\n"));
    printf(_("6. Bronze Structural Elements\n"));
    printf(_("7. Mainframe\n\n"));

    printf(_("What should be calculated?: "));
    scanf("%i", &select_component);
    printf("\n");
    printf(_("Amount?: "));
    scanf("%i", &amount_component);
    printf("\n");

    switch(select_component){
        case 1:
            bolted_steel_plating(amount_component);
            return 0;
        case 2:
            heavy_framework(amount_component);
            return 0;
        case 3:
            extensive_circult_board(amount_component);
            return 0;
        case 4:
            radiation_resistant_plating(amount_component);
            return 0;
        case 5:
            reinforced_ferrouranium_panels(amount_component);
            return 0;
        case 6:
            bronze_structural_elements(amount_component);
            return 0;
        case 7:
            mainframe(amount_component);
            return 0;
        default:
            printf("Incorrect data entered!\n");
            return 0;
    }
    return 0;
}

int bolted_steel_plating(int i) {
    printf(_("For %i Bolted Steel Plating you need:\n"), i);
    printf(_("Cast Steel Plate: %i (Steel: %i)\n"), 4 * i, 3 * 4 * i);
    printf(_("Titanium Plate: %i\n"), 4 * i);
    printf(_("Steel Bolt: %i (Steel: %i)\n"), 16 * i, 16 * i / 8);
    printf(_("Total Steel: %i\n"), (3 * 4 * i) + (16 * i / 8));
    printf(_("Iron Ore (if one ore = three steel): %i\n\n"), ((3 * 4 * i) + (16 * i / 8)) / 3);
    return 0;
}

int heavy_framework(int i) {
    printf(_("For %i Heavy Framework you need:\n"), i);
    printf(_("Bolted Steel Plating: %i\n"), 3 * i);
    printf(_("Polymer/Bakelite: %i\n"), 8 * i);
    printf(_("Welded Copper Plate: %i (Copper: %i)\n"), 4 * i, 6 * 4 * i);
    printf(_("Desh Ingot: %i\n"), i);
    printf(_("High-Speed Steel Bolt: %i (High-Speed Steel: %i)\n\n"), 32 * i, 32 * i / 8);

    bolted_steel_plating(3 * i);
    return 0;
}

int extensive_circult_board(int i) {
    printf(_("For %i Extensive Circuit Board you need:\n"), i);
    printf(_("Integrated Circuit Board: %i\n"), 12 * i);
    printf(_("Capacitor: %i\n"), 8 * i);
    printf(_("Gold Wire: %i (Gold: %i)\n"), 32 * i, 32 * i / 8);
    printf(_("Sulfuric Acid: %imB\n\n"), 1000 * i);

    printf(_("For %i Integrated Circuit Board you need:\n"), 12 * i);
    printf(_("Microchip: %i\n"), 4 * 12 * i);
    printf(_("Printed Circuit Board: %i\n"), 4 * 12 * i);
    printf(_("Lead Wire: %i (Lead: %i)\n\n"), 4 * 12 * i, 4 * 12 * i / 8);
    return 0;
}

int radiation_resistant_plating(int i) {
    printf(_("For %i Radiation Resistant Plating you need:\n"), i);
    printf(_("Bolted Steel Plating: %i\n"), 2 * i);
    printf(_("Cast Lead Plate: %i (Lead: %i)\n"), 8 * i, 3 * 8 * i);
    printf(_("Boron Ingot: %i\n"), 2 * i);
    printf(_("Tungsten Bolt: %i (Tungsen: %i)\n"), 32 * i, 32 * i / 8);
    printf(_("Engine Lubricant: %imB\n\n"), 1000 * i);

    bolted_steel_plating(2 * i);
    return 0;
}

int reinforced_ferrouranium_panels(int i) {
    printf(_("For %i Reinforced Ferrouranium Panels you need:\n"), i);
    printf(_("Radiation Resistant Plating: %i\n"), 3 * i);
    printf(_("Cast Ferrouranium Plate: %i (Ferrouranium: %i)\n"), 4 * i, 3 * 4 * i);
    printf(_("Cadmium/Technetium Steel Ingot: %i\n"), 4 * i);
    printf(_("Unsaturated Hydrocarbons: %imB\n\n"), 1000 * i);

    radiation_resistant_plating(3 * i);
    return 0;
}

int bronze_structural_elements(int i) {
    printf(_("For %i Bronze Structural Elements you need:\n"), i);
    printf(_("Heavy Framework: %i\n"), 3 * i);
    printf(_("Reinforced Ferrouranium Panels: %i\n"), i);
    printf(_("Cast Bismuth/Arsenic Bronze Plate: %i (Bronze: %i)\n"), 4 * i, 3 * 4 * i);
    printf(_("Welded Zirconium Plate: %i (Zirconium: %i)\n"), i, 6 * i);
    printf(_("Cold Perfluoromethyl: %imB\n\n"), 4000 * i);

    perfluoromethyl(4 * i);
    heavy_framework(3 * i);
    reinforced_ferrouranium_panels(i);
    return 0;
}

int mainframe(int i) {
    printf(_("For %i Mainframe you need:\n"), i);
    printf(_("Extensive Circuit Board: %i\n"), 3 * i);
    printf(_("Control Unit: %i\n"), 4 * i);
    printf(_("Capacitor Board: %i\n"), 4 * i);
    printf(_("Quartz Glass: %i\n"), 8 * i);
    printf(_("Perfluoromethyl: %imB\n\n"), 2000 * i);

    printf(_("For %i Control Unit you need:\n"), 4 * i);
    printf(_("Tantalium Capacitor: %i\n"), 4 * 16 * i);
    printf(_("Capacitor: %i\n"), 4 * 32 * i);
    printf(_("Microchip: %i\n"), 4 * 32 * i);
    printf(_("Lead Wire: %i (Lead: %i)\n"), 4 * 16 * i, 4 * 16 * i / 8);
    printf(_("Speed Upgrade Mk.I: %i\n"), 4 * i);
    printf(_("Control Unit Casing: %i\n"), 4 * i);
    printf(_("Perfluoromethyl: %imB\n\n"), 4 * 1000 * i);

    printf(_("For %i Capacitor Board you need:\n"), 4 * i);
    printf(_("Printed Circuit Board: %i\n"), 4 * i);
    printf(_("Tantalium Capacitor: %i\n"), 4 * 3 * i);
    printf(_("Hydrogen Peroxide: %imB\n"), 4 * 250 * i);
    printf(_("Lead Wire: %i (Lead: %i)\n\n"), 4 * 3 * i, 4 * 3 * i / 8);

    perfluoromethyl(6 * i);
    extensive_circult_board(3 * i);
    return 0;
}

int perfluoromethyl(int i) {
    printf(_("For %imB Perfluoromethyl you need:\n"), 1000 * i);
    printf(_("Fluorite: %i\n"), i);
    printf(_("Petroleum Gas: %imB\n"), 1000 * i);
    printf(_("Unsaturated Hydrocarbons: %imB\n\n"), 500 * i);
    return 0;
}