#!/bin/bash
echo "Akshay"
touch train.txt
t=$(realpath train.txt)
a=$(realpath Numeric_form_of_code.py)
#Need to go thru every folder in FinalData
cd ..
cd FinalData
cd Hackerrank
for folder in */; do
    cd $folder
    echo $(pwd)
    out=$(python $a)
    echo $out > numeric_form.txt
    echo $out >> $t
    cd ..
done    
