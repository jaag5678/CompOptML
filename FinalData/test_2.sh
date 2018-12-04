#!/bin/bash
for main in */; do
	cd $main
	for folder in */; do
		#echo $folder 
		cd $folder	
		#rm stat.txt
		for file in *; do
			if [ -x ${file} ]
			then
				avg=0
				for ((i = 0; i < $1; i++)); do
					ts1=$(date +%s%N)
					./$file < input.txt >/dev/null
					ts2=$(date +%s%N)
					ts=$((ts2 - ts1))
					echo $ts >> dummy.txt
					avg=$((avg+ts))
				done
				#echo "HAHA"
				avg=$((avg/100))
				echo $file $(cat dummy.txt) >> iter_rest.txt
				echo $file $avg >> stat.txt	
				rm dummy.txt
			fi
		done	
		cd ..
	done
done		
			 
