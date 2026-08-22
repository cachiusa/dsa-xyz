#!/usr/bin/env bash
set -e
mkdir -p out
f="./out/$(basename -s .cpp "$1")"
clang++ "$1" -o "$f" && "$f"
