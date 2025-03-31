#!/bin/bash

# Define an array of numbers
numbers=(10 20 30 40 50)

# Initialize sum variable
sum=0

# Loop through the array to calculate the sum
for num in "${numbers[@]}"; do
    sum=$((sum + num))
done
# Print the result
echo "The sum of the numbers in the array is: $sum"


