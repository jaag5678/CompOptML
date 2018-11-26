#!/bin/bash
#echo "Akshay"
for folder in */; do
	cd $folder
	for file in */; do		
		#echo $file
		cd $file
		for codes in *.c; do
			gcc -static -w -O0 code.c -o o0 -lm 
			gcc -static -w -O1 code.c -o o1 -lm
			gcc -static -w -O2 code.c -o o2 -lm
			gcc -static -w -O3 code.c -o o3 -lm
		cd ..	
		done	
	done
	cd ..
done

