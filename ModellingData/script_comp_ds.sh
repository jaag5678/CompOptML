#!/bin/bash
gcc fetch_feature_label.c -o comp_ds
cd ..
cd AutoEnc
a=$(realpath features_0.txt)
cd ..
cd FinalData
b=$(realpath final_stats.txt)
cd ..
cd ModellingData
echo "hello"
x=$(realpath comp_ds)
c=$(realpath my_dataset.txt)
$x $a $b $c
python conv_to_csv.py