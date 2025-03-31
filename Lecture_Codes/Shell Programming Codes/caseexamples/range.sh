#!/bin/bash
# Using Ranges and wildcards


echo "Enter a character:"
read char

case $char in
    [a-zA-Z])
        echo "You entered a character."
        ;;
    [0-9])
        echo "You entered a digit."
        ;;
    *)
        echo "You entered a special character."
        ;;
esac


