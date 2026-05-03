#!/bin/bash

csc -c -unit renderer renderer.scm -J -k
csc -c -unit x11-backend x11-backend.scm -J -k
csc -c -unit interface interface.scm -J -k

csc -O3 main.scm renderer.o x11-backend.o interface.o -uses renderer,x11-backend,interface -o um -k
if [ $? -eq 0 ]; then
    echo "Build successful!"
else
    echo "Build failed."
fi
