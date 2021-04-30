/*Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8*/
//Write a C program to find number of occurrence of given number in given linked list
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


	//for finding number of occurrence element in linklist
void occurrence(struct node *head)
{
	int cnt;
	struct node *temp=head;
	struct node *temp1=head;
	
        while (temp != NULL)
	{ 
		cnt=1;
		
	        while(temp1 != NULL)
	        {
	            if(temp->data == temp1->data)
	            {
	                cnt++;
	            }
	            temp1=temp1->next;
	        }
	        printf("number of occurrences of %d is %d\n",temp->data,cnt);  
	        temp=temp->next;	
	}
	
}

void main()
{
	struct node* first = NULL;
	int choice;
	do
	{
		printf("1.Createlinlist\n");
		printf("2.Display Linklist\n");
		printf("3.Number of occurrences in the link list\n");
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
			occurrence(first);
			break;

		}
	} while (choice != 0);
}
