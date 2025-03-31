#!/bin/bash

sum=0
echo "Enter numbers to sum (enter 0 to stop):"

while true
do
    read num
    if [ $num -eq 0 ]
    then
        break  # Exit the loop if the user enters 0
    fi
    sum=$((sum + num))  # Add the number to the sum
done
echo "The total sum is: $sum"


