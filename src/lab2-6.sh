#!/bin/bash
mkdir $1
eval "cd files"
for i in 0 1 2 3 4
do
	touch file$i.txt
done	 

mkdir $1
eval "cd files"
for i in 0 1 2 3 4
do
	touch file$i.txt
done
touch files.tar

exit
