/*Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8*/
//Write a C program to create singly linked list and accept one number from user and find it in given linked list.
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};

  //for creating node
struct node* createnode()
{
	int a;
	struct node* newnode = NULL;
	newnode = (struct node*)malloc(sizeof(struct node));

	if (newnode == NULL)
	{
		printf("Memory allocation failed");
	}
	else
	{
		printf("enter te value\n");
		scanf("%d", &a);
		newnode->data = a;
		newnode->next = NULL;
	}
	return newnode;
}

	//for creating linklist
void createlinklist(struct node** head)
{
	struct node* newnode = NULL;
	struct node* temp = NULL;
	temp = *head;
	newnode = createnode();
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
}

	//for displaying linklist
void display(struct node* head)
{
	while (head != NULL)
	{
		printf("%d\t", head->data);
		head = head->next;
	}
}
	//for searching element in linklist
void search(struct node *head)
{
	int n,f=0;
        printf("Enter the number you want to search\n");
        scanf("%d",&n);
        while (head != NULL)
	{
	        if(head->data==n)
	        {
	           f=1;
	           break;
	        }   
		head = head->next;
	}
	if(f==1)
	{
	   printf("Number is present in given link list\n");
        }
        else
        printf("Number is not present in given link list\n");
}

void main()
{
	struct node* first = NULL;
	int choice;
	do
	{
		printf("1.Createlinlist\n");
		printf("2.Display Linklist\n");
		printf("3.Search in the link list\n");
		printf("0.Exit\n");
		printf("Enter the choice\n");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			createlinklist(&first);
			break;
		case 2:
			display(first);
			break;
		case 3:
			search(first);
			break;

		}
	} while (choice != 0);
}
