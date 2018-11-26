#!/bin/bash
for main in */; do
	cd $main
	for folder in */; do
		echo $folder 
		cd $folder	
		for file in *; do
			if [ -x ${file} ]
			then
				avg=0
				for ((i = 1; i < 100; i++)); do
					ts1=$(date +%s%N)
					./$file < input.txt >/dev/null
					ts2=$(date +%s%N)
					ts=$((ts2 - ts1))
					#echo "HITHERE"
					avg=$((avg+ts))
					#echo $ts
				done
				#echo "HAHA"
				avg=$((avg/100))
				echo $file $avg >> stat.txt	
	
			fi
		done	
		cd ..
	done
done		
			 
