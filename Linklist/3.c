/*Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8*/
//Write a C program to create two singly linked list and merge it in one singly linked list.
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

struct node* tnode(int a)
{
	struct node* newnode = NULL;
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = a;
	newnode->next = NULL;

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

    //for merging two linklist
void merge(struct node* head, struct node* head1, struct node** head2)
{
	while (head != NULL)
	{
		struct node* newnode = NULL;
		struct node* temp = *head2;


		newnode = tnode(head->data);
		if (*head2 == NULL)
		{
			*head2 = newnode;
		}
		else
		{
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = newnode;
		}
		head = head->next;
	}
	while (head1 != NULL)
	{
		struct node* newnode = NULL;
		struct node* temp = *head2;


		newnode = tnode(head1->data);
		if (*head2 == NULL)
		{
			*head2 = newnode;
		}
		else
		{
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = newnode;
		}
		head1 = head1->next;
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


void main()
{
	struct node* first = NULL;
	struct node* second = NULL;
	struct node* third = NULL;
	int choice;
	do
	{
		printf("\n1.Createlinlist for first link list\n");
		printf("2.Createlinlist for second link list\n");
		printf("3.Display Linklist for first linklist \n");
		printf("4.Display Linklist for second lnklist \n");
		printf("5.For merge linklists\n");
		printf("6.Display merge linklist\n");
		printf("0.Exit\n");
		printf("Enter the choice\n");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			createlinklist(&first);
			break;
		case 2:
			createlinklist(&second);
			break;
		case 3:
			display(first);
			break;
		case 4:
			display(second);
			break;
		case 5:
			merge(first,second,&third);
			break;
		case 6:
			display(third);
			break;

		}
	} while (choice != 0);
}
