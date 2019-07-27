all: printf flow_control cast

printf: printf.c
	gcc -Wall -std=c99 -o printf printf.c
flow_control:flow_control.c
	gcc -Wall -std=c99 flow_control.c -o flow_control
cast:cast.c
	gcc -Wall -std=c99 cast.c -o cast
clean:
	rm -f printf flow_control cast