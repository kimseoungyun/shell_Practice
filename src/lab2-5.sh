#!/bin/bash
str="ls $1 *.sh"
myfunc(){
	echo "enter the function"
	eval $str
	return
}
echo "program start"
myfunc
echo "program end"
exit 0

