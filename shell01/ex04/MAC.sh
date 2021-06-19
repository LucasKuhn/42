#!/bin/sh
ip link | grep -oP "(?<=link/ether ).*(?= brd)"