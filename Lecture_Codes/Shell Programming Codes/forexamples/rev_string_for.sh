#!/bin/bash

echo "Enter a string: "
read str

reversed_str=""
len=${#str}

# Loop over the string in reverse order and build the reversed string
for (( i=$len-1; i>=0; i-- )); do
    reversed_str="$reversed_str${str:i:1}"
done
echo "Reversed string: $reversed_str"


