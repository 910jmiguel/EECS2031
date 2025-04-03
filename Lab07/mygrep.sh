#!/bin/bash

echo -n "Please enter file to search: "
read file

echo -n "Please enter search key: "
read pattern

grep "$pattern" "$file"

exit=$?
echo "the exit value was $exit"

if [ ! -x "$0" ]; then
	chmod +x "$0"
fi
