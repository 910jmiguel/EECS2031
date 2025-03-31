#!/bin/bash
# To find whether a number is greater than 10
read -p "Enter a number: " num

if [ $num -gt 10 ]; then
    echo "The number is greater than 10."
else
    echo "The number is 10 or less."
fi


