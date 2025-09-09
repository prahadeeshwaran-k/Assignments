#include "student_modify.h"
#include "queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void modifyroll(node *ptr, int n)
{
	node *temp = ptr;
	while (temp != NULL)
	{
		if (temp->roll == n)
		{
			printf("%d | %s | %f\n", temp->roll, temp->name, temp->marks);
			printf("Enter the Data:New Name\n");
			scanf(" %[^\n]", temp->name); // Here we are add only Name
			printf("Enter the Data:New Marks\n");
			scanf("%f", &temp->marks); // Here we are add only marks
			printf("the updated data : %d | %s | %f\n", temp->roll, temp->name, temp->marks);
			return;
		}
		temp = temp->next;
	}
	// if there is no student roll as n
	printf("there is no student have the roll\n");
}

void modifyname(node *ptr, char *str)
{
	node *temp = ptr;
	int found = 0;
	int count = 0;
	printf("in name modify\n");
	while (temp != NULL)
	{
		if (strcmp(str, temp->name) == 0)
		{
			++count;
			printf("%d | %s | %f\n", temp->roll, temp->name, temp->marks);
			found = 1;
		}
		temp = temp->next;
	}

	// if there is no student roll as n
	if (!found)
	{
		printf("there is no student have the name\n");
		return;
	}

	// more the one name
	if (count >= 2)
	{
		printf("Select ROLL Number: ");
		int roll;
		scanf("%d", &roll);
		modifyroll(ptr, roll);
		return;
	}

	printf("Enter the Data:New Name\n");
	scanf(" %[^\n]", temp->name); // Here we are add only Name
	printf("Enter the Data:New Marks\n");
	scanf("%f", &temp->marks); // Here we are add only marks
	printf("the updated data : %d | %s | %f\n", temp->roll, temp->name, temp->marks);
}

void modifymarks(node *ptr, float m)
{
	node *temp = ptr;
	int found = 0;
	int count = 0;
	printf("in name modify\n");
	while (temp != NULL)
	{
		if (temp->marks == m)
		{
			++count;
			printf("%d | %s | %f\n", temp->roll, temp->name, temp->marks);
			found = 1;
		}
		temp = temp->next;
	}
	// if there is no student roll as n
	if (!found)
	{
		printf("there is no student have the name\n");
		return;
	}
	// more the one name
	if (count >= 2)
	{
		printf("Select ROLL Number: ");
		int roll;
		scanf("%d", &roll);
		modifyroll(ptr, roll);
		return;
	}

	printf("Enter the Data:New Name\n");
	scanf(" %[^\n]", temp->name); // Here we are add only Name
	printf("Enter the Data:New Marks\n");
	scanf("%f", &temp->marks); // Here we are add only marks
	printf("the updated data : %d | %s | %f\n", temp->roll, temp->name, temp->marks);
}

void reverselink(node **head)
{
	node *prev = NULL;
	node *curr = *head;

	while (curr != NULL)
	{
		node *next = curr->next;
		curr->next = prev;

		prev = curr;
		curr = next;
	}

	*head = prev;
}
