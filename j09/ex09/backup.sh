ifconfig | grep 'inet '| grep -v "127.0.0.1" | cut -c7- | cut -f1 -d " "))
