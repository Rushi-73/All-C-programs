/*Name : Sonawane Rushikesh Ganesh
*/
//Write a C program to print singly linked list in reverse order.
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

struct node *tnode(int a)
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

	//for displaying linklist
void cpy(struct node* head,struct node** head1 )
{
        struct node* newnode = NULL;
	struct node* temp=*head1;
	
	while(head!=NULL)
	{
	    newnode=tnode(head->data);
	if (*head1 == NULL)
	{
		*head1 =newnode;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	head=head->next;
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
	int choice;
	do
	{
		printf("1.Createlinlist\n");
		printf("2.Display Linklist in reverse order\n");
		printf("0.Exit\n");
		printf("Enter the choice\n");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			createlinklist(&first);
			break;
		case 2:
			cpy(first,&second);
			break;
		case 3:
		        display(second);		
		
		}
	} while (choice != 0);
}
