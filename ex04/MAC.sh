#! /bin/sh
ifconfig | grep -i "ether.*" | cut -d " " -f2
