#!/bin/bash
gcc extract_min.c -o e_min
rm final_stats.txt
touch final_stats.txt
x=$(realpath final_stats.txt)
y=$(realpath e_min)
for main in */; do
    cd $main
    for folder in */; do
        cd $folder
        a=$(realpath stat.txt)
        cd ..
        echo $folder $($y $a) >> $x
    done
    cd ..
done        