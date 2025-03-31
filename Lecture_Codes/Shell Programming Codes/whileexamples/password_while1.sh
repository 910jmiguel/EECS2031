#!/bin/bash

while test "$password" != "secret";    #as long as the password is not same as “secret” 
do
	echo -n "Enter your password: "
	read password
done
echo "Welcome!"

