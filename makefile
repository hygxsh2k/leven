
leven: main.c libleven.so
	gcc -Wall -I./ -L./ main.c -o leven -lleven

libleven.so: leven.c leven.h
	gcc -shared leven.c -o libleven.so

clean:
	rm leven libleven.so
