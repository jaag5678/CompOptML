#!/bin/bash
rm train.txt
cd ..
cd FinalData
cd Hackerrank
for folder in */; do
    cd $folder
    rm numeric_form.txt
    cd ..
done    