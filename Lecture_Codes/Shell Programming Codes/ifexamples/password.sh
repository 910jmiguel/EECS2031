#!/bin/bash
# Define the secret password

SECRET="secret"

# Prompt user for input
echo "Enter the password:"
read input

# Check if the entered password matches the secret password
if [ "$input" == "$SECRET" ]; then
    echo "Welcome!"
else
    echo "Go away"
fi


