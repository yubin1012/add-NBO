all : add_nbo

add_nbo : add_nbo.c

	gcc -o add_nbo add_nbo.c

clean: rm -f add_nbo
	rm -f *.o