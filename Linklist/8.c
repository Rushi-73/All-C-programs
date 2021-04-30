/*Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8*/
/*Write a C program to create two linked lists (B and C) from one linked
list(A) one of two(B) contains only even data from (A) and another contains
only odd data from (A)*/

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
		printf("enter the value\n");
		scanf("%d", &a);
		newnode->data = a;
		newnode->next = NULL;
	}
	return newnode;
}

  //for coping the value into newnode
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



   //for separating odd and even numbers
void separate(struct node* head, struct node** head1, struct node** head2)
{
	while (head != NULL)
	{
		

		if (head->data % 2 == 0)
		{
			struct node* newnode = NULL;
			struct node* temp = *head1;

			newnode = tnode(head->data);
			if (*head1 == NULL)
			{
				*head1 = newnode;
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
		else
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
	}


}

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
		printf("2.separating odd and even numbers from  link list\n");
		printf("3.Display Linklist  \n");
		printf("4.Display Linklist for even numbers  \n");
		printf("5.Display Linklist for odd numbers  \n");
		printf("0.Exit\n");
		printf("Enter the choice\n");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			createlinklist(&first);
			break;
		case 2:
			separate(first, &second, &third);
			break;
		case 3:
			display(first);
			break;
		case 4:
			display(second);
			break;
		case 5:
			display(third);
			break;

		}
	} while (choice != 0);
}
