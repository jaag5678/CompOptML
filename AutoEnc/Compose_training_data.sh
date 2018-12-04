#!/bin/bash
echo "hello there"
a=$(realpath train_p)
rm training_data.txt
touch training_data.txt
b=$(realpath training_data.txt)
cd ..
cd FinalData
for folder in */; do
    cd $folder
    for program in */; do
        cd $program
        echo $($a numeric_form.txt) >> $b
        cd ..
    done
    cd ..
done        