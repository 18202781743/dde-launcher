#!/bin/bash

BUILD_DIR=build
REPORT_DIR=report

cd ../
rm -rf $BUILD_DIR
mkdir $BUILD_DIR
cd $BUILD_DIR
cmake ../
make

cd tests/

lcov -c -i -d ./ -o init.info
./dde_launcher_unit_test
lcov -c -d ./ -o cover.info
lcov -a init.info -a cover.info -o total.info
lcov -r total.info "*/tests/*" "*/usr/include*" "*build/src*" -o final.info

rm -rf ../../tests/$REPORT_DIR
mkdir -p ../../tests/$REPORT_DIR
genhtml -o ../../tests/$REPORT_DIR final.info
