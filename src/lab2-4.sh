#!/bin/sh
echo "Are you funny to do linux? (yes / no)"
read answer
case $answer in
	yes | y | Y | Yes | YES)
		echo "I'm glad"
		echo "Do your best ^^";;
	[nN]*)
		echo "It's too sad";;
	*)
		echo "only enter yes or no"
		exit 1;;
esac
exit 0
