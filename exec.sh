#!/bin/sh
echo Requirements checkout...
ls /bin /usr/bin/ /usr/local/bin/ | grep gcc 
gcc main.c dxtlib.c -o x && ./x
