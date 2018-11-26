#!/bin/bash
#First let us delete any previous files related to the statistics
bash delete.sh
#Then let us compile all the programs 
bash my_script1.sh
#Next let us warmup the cache by running all codes once 
bash test_2.sh 1
#Finally let's run the script to collect stats for each program
bash test_2.sh 100
#Lastly, let's collect the stats related to o2 and o3
bash get_final_stats.sh