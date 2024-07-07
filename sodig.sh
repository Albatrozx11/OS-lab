#!/bin/bash
echo "Enter the number:"
read num
digit=0
sum=0
temp=$num
while [	$num -gt 0 ]
do
	digit=$((num % 10))
	sum=$((sum + digit))
	num=$((num / 10))
done
echo "The sum of digits of $temp is $sum"
