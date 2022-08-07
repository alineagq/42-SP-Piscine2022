#!/bin/bash

cat /etc/passwd | sed '/^#/d' | sed -n 'n;p' | sed 's/:.*//' | rev | sort -r | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" | tr '\n' ',' | sed 's/,/, /g' | sed 's/\(.*\), /\1\./'

