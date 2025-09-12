#!/usr/bin/env bash

APP_NAME="hbm-calculator"
VERSION="1.0.0"

PREFIX="$(pwd)/result"
BUILD_DIR="$(pwd)/build"

rm -rf "$BUILD_DIR"

mkdir -p "$BUILD_DIR/locale/uk/LC_MESSAGES"
mkdir -p "$BUILD_DIR/bin"

msgfmt po/uk.po -o "$BUILD_DIR/locale/uk/LC_MESSAGES/${APP_NAME}.mo"
gcc src/main.c -o "$BUILD_DIR/bin/${APP_NAME}"

mkdir -p "$PREFIX/bin"
mkdir -p "$PREFIX/share/locale/uk/LC_MESSAGES"

cp "$BUILD_DIR/bin/${APP_NAME}" "$PREFIX/bin/"
cp "$BUILD_DIR/locale/uk/LC_MESSAGES/${APP_NAME}.mo" "$PREFIX/share/locale/uk/LC_MESSAGES/"

echo "build completed!"