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
	
