!/bin/sh
#muestra los usuarios separados solo por comas

groups $FT_USER | tr ' ' ',' | tr -d '\n'
