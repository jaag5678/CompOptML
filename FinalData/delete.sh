#!/bin/bash
for main in */; do
    cd $main
    for folder in */; do
        cd $folder
        rm stat.txt
        rm o0
        rm o1
        rm o2
        rm o3
        cd ..
    done
    cd ..
done        