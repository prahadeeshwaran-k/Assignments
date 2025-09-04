student: main.o queue.o student_add.o student_delete.o
	gcc main.o queue.o student_add.o student_delete.o -o student

main.o: main.c
	gcc -c main.c -o main.o

queue.o: queue.c
	gcc -c queue.c -o queue.o

student_add.o: student_add.c
	gcc -c student_add.c -o student_add.o

student_delete.o: student_delete.c
	gcc -c student_delete.c -o student_delete.o
