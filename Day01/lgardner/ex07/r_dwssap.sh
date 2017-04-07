# Lewis Gardner was here
FT_LINE1=
FT_LINE2=
cat /etc/passwd | egrep -v "^\s*(#|$)" | awk 'NR % 2 == 0' | rev | cut -d "*" -f 2 | cut -d ":" -f 2 | sort -rnk2 | awk '{printf "%s%s",sep,$0; sep=",\n"} END{print ""}' | sed "$FT_LINE1"','"$FT_LINE2"'!d' | tr '\n' ' ' && printf '\n' && printf '.'
