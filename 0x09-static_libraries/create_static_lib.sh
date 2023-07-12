#!/bin/bash
gcc -c *.c
ar -rc liball.a *.o
ranrib liball.a
