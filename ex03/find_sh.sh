#! /bin/sh

find . -type f -iname '*.sh' | rev | cut -d "." -f2 | cut -d '/' -f1 | rev
