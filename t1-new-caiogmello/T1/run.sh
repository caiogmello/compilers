#!/bin/bash
# Basic run.sh
# One parameter: $1 is the input file name (.bm)

name=$(basename $1 .bm)
./blite $1 "$name.out"


