#!/bin/bash
gcc -c ./*.c
ar -rc liball.a ./*.o
rm -f *.o
#if [ -e liball.a ]; then
#   echo "Static library liball.a created successfully."
#else
#   echo "Static library creation failed."
#fi
