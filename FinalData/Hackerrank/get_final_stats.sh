#!/bin/bash
for folder in */; do
    cd $folder
    a=$(realpath stat.txt)
    cd ..
    echo $folder $(./e_min $a) >> final_stats.txt
done    