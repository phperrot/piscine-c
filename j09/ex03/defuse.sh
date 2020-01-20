#!/bin/bash
let date1=$(touch -A -000001 bomb.txt | stat -t %X -f %a bomb.txt)
echo $date1
