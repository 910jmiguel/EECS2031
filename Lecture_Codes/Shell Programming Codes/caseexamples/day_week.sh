#!/bin/bash
#To find out information about the day of the week

echo "Enter a day of the week (e.g., Mon, Tue, etc.):"

read day
# Convert input to lowercase using parameter expansion
day=$(echo "$day" | tr '[:upper:]' '[:lower:]')

case $day in
    mon)
        echo "Start of the workweek."
        ;;
    tue|wed|thu)
       echo "It's just another weekday."
        ;;
    fri)
        echo "Thank God it's Friday!"
        ;;
    sat|sun)
        echo "It's the weekend!"
        ;;
    *)
        echo "Invalid Day entered."
        ;;
esac


