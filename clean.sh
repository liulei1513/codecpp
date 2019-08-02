#!/bin/sh
if [ -z $1 ];then
  echo "usage:"
  echo "$0 dirname"
  exit
fi
find $1 -name "*.dSYM" -exec rm -rf {} \;
find $1 -name "*.out" -exec rm -rf {} \;
echo "DONE!"
