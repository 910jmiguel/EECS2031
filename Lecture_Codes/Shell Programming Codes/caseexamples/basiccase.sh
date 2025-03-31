#!/bin/bash
#Basic Case statement

echo "Enter a number between 1 and 3:"
read number

case $number in
    1)
        echo "You chose One."
        ;;
    2)
        echo "You chose Two."
        ;;
    3)
        echo "You chose Three."
        ;;
    *)
        echo "Invalid choice."
        ;;
esac


