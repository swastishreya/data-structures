gcc -c queue.c -o queue.o
gcc -c test.c -o test.o
gcc test.o queue.o -o test