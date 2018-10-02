gcc -c deepCopy.c -o deepCopy.o
gcc -c test.c -o test.o
gcc test.o deepCopy.o -o test