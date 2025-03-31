#!/bin/bash

# Define the range (for example, 0 to 10 to print 2^0 to 2^10)
for i in $(seq 0 10)
do
    result=$((2 ** i))   # Calculate 2 raised to the power of i
    echo "2^$i = $result"  # Print the result
done


