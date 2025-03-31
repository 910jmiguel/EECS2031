#!/bin/bash

echo "Enter a number to reverse: "
read number

reverse=0
while [ $number -gt 0 ]
do
    remainder=$((number % 10))  # Get the last digit

    reverse=$((reverse * 10 + remainder))  # Append the digit to the reverse number

    number=$((number / 10))  # Remove the last digit
done
echo "Reversed number: $reverse"


