#!/bin/bash

FLAGS="-O3 -d0 -strict-types"

csc $FLAGS -c -unit renderer -J renderer.scm
csc $FLAGS -c -unit x11-backend -J x11-backend.scm
csc $FLAGS -c -unit minifb-backend -J minifb-backend.scm
csc $FLAGS -c -unit interface -J interface.scm
csc $FLAGS -c main.scm

csc $FLAGS -o um renderer.o x11-backend.o minifb-backend.o interface.o main.o \
    -L -lminifb \
    -L -lX11 \
    -L -lXrandr \
    -L -lGL \
    -L -lstdc++
