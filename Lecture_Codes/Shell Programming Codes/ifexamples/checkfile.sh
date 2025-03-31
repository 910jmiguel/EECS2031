#!/bin/bash
#To Check whether a file is a refular file or
#a directory or none

read -p "Enter a file name: " filename

if [ -f "$filename" ]; then
   echo "$filename is a regular file."
elif [ -d "$filename" ]; then
    echo "$filename is a directory."
else
    echo "$filename does not exist."
fi



