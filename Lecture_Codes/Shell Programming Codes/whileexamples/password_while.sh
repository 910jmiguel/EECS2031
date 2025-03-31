#!/bin/bash

# Define the secret password
secret="secret"

# Prompt the user to enter the password and check if it's correct
while true; do
    echo "Enter the password:"
    read password

    if [ "$password" == "$secret" ]; then
        echo "Welcome!"
        break  # Exit the loop when the password is correct
    else
        echo "Go away!"
    fi
done


