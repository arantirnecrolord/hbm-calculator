# hbm-calculator
my fucking calculator for expensive mode

## Building for Windows
I don't know

## Building for Linux
1. Install packages **gcc** and **gettext**
```bash
Debian / Ubuntu
sudo apt install gcc gettext

Fedora
sudo dnf install gcc gettext

Arch
sudo pacman -S gcc gettext
```
if you are using some other distribution, figure it out yourself
2. Download the source code
```bash
git clone https://github.com/arantirnecrolord/hbm-calculator.git
```
3. Enter the source code directory
```bash
cd hbm-calculator
```
4. Make the file executable
```bash
chmod +x build.sh
```
5. Build
```bash
./build.sh
```
6. Run
```bash
./result/bin/hbm-calculator
```
## Building for NixOS
5. Build
```bash
nix-build
```
6. Run
```bash
./result/bin/hbm-calculator
```

![](/screenshot.png)
