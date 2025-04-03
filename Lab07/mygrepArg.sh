# Lab07
# Author: Advincula, Juan-Miguel
# EECS/Prism Username: jmiguela
# YorkU Student Number: 220523627
# Email: jmiguela@my.yorku.ca

#!/bin/bash

if [ "$#" -lt 2 ]; then
	echo "Error! usage: $0 filename pattern"
	exit 1
fi

if [ ! -f "$1" ]; then
	echo "Error! \"$1\" is not an existing file in current directory"
	exit 1
fi

echo "There are $# command line arguments: $@"

list_grep=$(grep "$2" "$1")

if [ -n "$list_grep" ]; then
	echo "$list_grep"
	echo "pattern \"$2\" found in file \"$1\""
else
	echo "pattern \"$2\" not found in file \"$1\""
fi





