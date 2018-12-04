#!/bin/bash
echo "HI there"
a=$(realpath var)
rm data_dist.txt 
for folder in */; do
    cd $folder
    for program in */; do
        cd $program
            $a iter_rest.txt > data_dist.txt
        cd ..
    done
    cd ..
done            