#!/bin/bash

echo "Enter a string: "
read str

reversed_str=$(echo "$str" | rev)
echo "Reversed string: $reversed_str"


