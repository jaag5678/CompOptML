#!/bin/bash
echo "HI"
for folder in */; do
	cd $folder
	for file in *; do
		if [ -x ${file} ]
		then				
			echo $file
		fi
	done
	cd ..
done 
