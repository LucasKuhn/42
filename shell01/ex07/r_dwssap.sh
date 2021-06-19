#!/bin/sh
cat /etc/passwd | # Get content of /etc/passwd
grep --invert-match "^#" | # Without comments
awk 'NR%2==0' | # Every other line
cut --delimiter=":" --fields=1 | # Login only
rev | # Reversed
sort | # Ordered
tac | # Top-down
awk "NR>=${FT_LINE1:-7} && NR<=${FT_LINE2:-15}" | # Between certain lines
tr '\n' ',' | # Separated by commas instead of new lines
sed 's/,/, /g' | # With a space after the comma
sed 's/, $/./' # Ended with a dot