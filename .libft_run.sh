#!/bin/bash
touch s1.txt s2.txt s3.txt s4.txt
gcc -Wall -Wextra -Werror *.c .main/*.c -I .  -o main
./main | less