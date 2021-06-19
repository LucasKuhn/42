#!/bin/sh
groups $FT_USER | tr " " "," | tr --delete '\n' | cat --show-ends --show-nonprinting 