#!/bin/bash
for folder in */; do
    cd $folder
    rm stat.txt
    rm a.out
    cd ..
done    