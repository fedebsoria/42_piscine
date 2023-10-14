!#/bin/sh
#Shows the computer's MAC directions

ifconfig -a | grep -ioE '([a-z0-9]{2}:){5}..'
