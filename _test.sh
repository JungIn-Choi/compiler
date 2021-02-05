#!/bin/sh

./comp test/hello.c
./test/hello
echo -----

./comp test/test01.c
./test/test01
echo -----

./comp test/test02.c
./test/test02
echo -----
