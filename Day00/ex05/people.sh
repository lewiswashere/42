ldapsearch -Q "uid=z*" cn | grep 'cn:' | cut -d ":" -f 2 | sort -t: -k2 -n -r | awk NF
