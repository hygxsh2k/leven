
leven: main.c libleven.so
	gcc -Wall -L${PWD} main.c -o leven -lleven

libleven.so: leven.c leven.h
	gcc -Wall -shared leven.c -o libleven.so

clean:
	rm leven libleven.so
