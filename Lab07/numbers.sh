# Lab07
# Author: Advincula, Juan-Miguel
# EECS/Prism Username: jmiguela
# YorkU Student Number: 220523627
# Email: jmiguela@my.yorku.ca

#!/bin/bash

while true; do
	echo -n "Enter a number or 'quit': "
	read num

	if [ "$num" == "quit" ]; then
		echo "Bye bye"
		break
	fi

	if [ "$num" -gt 0 ]; then
		echo "$num is a positive number"
	elif [ "$num" -lt 0 ]; then
		echo "$num is a negative number"
	else
		echo "$num is zero"
	fi
done
	
