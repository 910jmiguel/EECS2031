#!/bin/bash

sum=0.0  # Initialize sum as a floating point number
echo "Enter floating-point numbers to sum (enter 0 to stop):"

while true
do
    read num
    if [[ $num == 0.0 ]]  # Exit the loop if 0.0 is entered
    then
        break
    fi
    # Add the number to the sum using bc
    sum=$(echo "$sum + $num" | bc -l)
done
echo "The total sum is: $sum"


