#!/bin/bash
he=`expr $2 \* $2`
we=$1
he2=`expr 2 \* 10000 \* $1 / $he`
if [ 37 -gt $he2 ]
then
	echo "you are underweight"
elif [ $he2  -ge 46 ]
then
	echo "you are overweight"
else
	echo "you are of normal weight"
fi
exit 0
