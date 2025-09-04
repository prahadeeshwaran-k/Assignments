#ifndef STUDENT_H
#define STUDENT_H

typedef struct student {
    int roll;
    char name[30];
    float marks;
    struct student *next;
} node;

#endif