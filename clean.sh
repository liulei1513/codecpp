#!/bin/sh
if [ -z $1 ];then
  echo "usage:"
  echo "$0 dirname"
  exit
fi
find $1 -name "*.dSYM" -exec rm -rf {} \;
echo "DONE!"