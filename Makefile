default: clean libPepperCrypto.a example

example: example.o
	gcc -Wall -O2 -o example -L. -lPepperCrypto example.o

example.o: example.c
	gcc -Wall -O2 -c example.c

libPepperCrypto.a: PepperCrypto.o
	ar -rc libPepperCrypto.a PepperCrypto.o
	ranlib libPepperCrypto.a

PepperCrypto.o: PepperCrypto.c
	gcc -c -Wall -Wextra -O2 PepperCrypto.c

clean:
	rm -f *.o libPepperCrypto.a example
