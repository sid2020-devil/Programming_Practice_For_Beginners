#!/bin/bash
file='file_name.txt'
while read line; do
echo $line
done < $file
