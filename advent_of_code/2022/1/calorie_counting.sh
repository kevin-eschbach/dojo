#!/bin/bash
filename='input.txt'
echo $max_cal
elf_cal=0
max_cal=0
declare -a elves
idx=0
while read line; do 
	if [[ $line == '' ]]; then
		if [[ $elf_cal -gt $max_cal ]]; then
			max_cal=$((elf_cal))
		fi
                elves[$idx]=$elf_cal
		idx=$((idx+1))
		elf_cal=0
	else
		elf_cal=$((elf_cal+line))
	fi
done < $filename
echo $max_cal
readarray -t a_out < <(printf '%s\n' "${elves[@]}" | sort -r -n)
top3_cal=0
for i in 0 1 2; do
	top3_cal=$((top3_cal+a_out[$i]))
done
# echo ${a_out[@]}
echo $top3_cal
