#!/bin/sh
find . -name "*.sh" -exec basename {} \; | grep --only-matching --perl-regexp ".*(?=.sh$)"