#!/bin/bash
touch final_stats.txt
x=$(realpath final_stats.txt)
for main in */; do
    cd $main
    for folder in */; do
        cd $folder
        a=$(realpath stat.txt)
        cd ..
        echo $folder $(./e_min $a) >> $x
    done
    cd ..
done        