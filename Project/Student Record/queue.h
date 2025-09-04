#ifndef QUEUE_H
#define QUEUE_H

typedef struct rollBuffer{
    int num;
    struct rollBuffer *next;
} roll;

extern roll *rollhead;

// Function prototypes
void enque(roll**head,int rollno);
int deque(roll **ptr);
int isfull(roll *ptr);
int isempty(roll *ptr);
void printqueue(roll *head);

#endif