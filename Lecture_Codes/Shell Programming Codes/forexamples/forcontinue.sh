#!/bin/bash
for i in {1..5}
do
    if [ $i -eq 3 ]; then
        continue  # Skip iteration 3
    fi
    if [ $i -eq 4 ]; then
        break  # Exit the loop at iteration 4
    fi
    echo "Iteration $i"
done


