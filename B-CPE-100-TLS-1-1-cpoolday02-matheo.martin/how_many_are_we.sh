#!/bin/sh

if [ -n $1 ]
then
	cut -d\; -f 3 | grep -ci $1
else
	wc -l
fi
