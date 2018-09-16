gcc -c stack.c -o stack.o
gcc -c test.c -o test.o
gcc test.o stack.o -o test