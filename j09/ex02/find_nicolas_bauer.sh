#!/bin/bash
grep -rnw 'contacts_hard.txt' -e 'bauer' | tr "\t" "##" | cut -f3 -d "#"
