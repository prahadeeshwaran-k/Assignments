student: main.o queue.o student_add.o student_delete.o student_modify.o student_save.o menu.o student_sort.o
	gcc main.o queue.o student_add.o student_delete.o student_modify.o student_save.o menu.o student_sort.o -o student

main.o: main.c
	gcc -c main.c -o main.o

queue.o: queue.c
	gcc -c queue.c -o queue.o

student_add.o: student_add.c
	gcc -c student_add.c -o student_add.o

student_delete.o: student_delete.c
	gcc -c student_delete.c -o student_delete.o

student_modify.o: student_modify.c
	gcc -c student_modify.c -o student_modify.o

student_save.o: student_save.c
	gcc -c student_save.c -o student_save.o

menu.o: menu.c
	gcc -c menu.c -o menu.o

student_sort.o: student_sort.c
	gcc -c student_sort.c -o student_sort.o	
