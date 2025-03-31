#!/bin/bash
# Initialize password and try counter

password=""
tries=0
max_tries=3

# Loop until the password is "secret" or the number of tries reaches the limit
while test "$password" != "secret" && test $tries -lt $max_tries; do
    echo -n "Enter your password: "
    read password
    tries=$((tries + 1))  # Increment the try counter
done

# Check if the user successfully entered the password
if test "$password" = "secret"; then
    echo "Welcome!"
else
    echo "Sorry, you've used all $max_tries tries. Access denied."
fi


