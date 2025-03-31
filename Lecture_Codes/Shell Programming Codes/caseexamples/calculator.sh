#!/bin/bash
# Calculator program using case statement

echo "Simple Calculator"
echo "Enter first number: "
read num1
echo "Enter second number: "
read num2

echo "Enter operation to perform (+, -, *, /): "
read operator

case $operator in
    +)
	result=$(echo "$num1 + $num2" | bc -l)
        echo "Result: $num1 + $num2 = $result"
        ;;
    -)
        result=$(echo "$num1 - $num2" | bc -l)
        echo "Result: $num1 - $num2 = $result"
        ;;
   '*')
        result=$(echo "$num1 * $num2" | bc -l)
        echo "Result: $num1 * $num2 = $result"
        ;;
    /)
        # Check for division by zero
        if (( $(echo "$num2 == 0" | bc -l) )); then
            echo "Error: Division by zero is not allowed."
        else
             result=$(echo "$num1 / $num2" | bc -l)
            echo "Result: $num1 / $num2 = $result"
        fi
        ;;
    *)
        echo "Invalid operator. Please use one of +, -, *, /"
        ;;
esac


