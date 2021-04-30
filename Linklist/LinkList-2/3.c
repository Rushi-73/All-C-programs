/*Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8*/
//Write a C program to find second highest element in singly linked list.


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


	//for sorting linklist in ascending order
void llsort(struct node* head)
{
	int t;
	struct node* temp = head;
	struct node* temp1 = head;
	
	while (temp != NULL)
	{
		temp1 = temp;
		while (temp1 != NULL)
		{
			
			temp1 = temp1->next;
			if (temp1 != NULL)
			{
				if ((temp->data) < (temp1->data))
				{

					t = temp->data;
					temp->data = temp1->data;
					temp1->data = t;
				}
			}
		}
		temp = temp->next;
	}
}
 //for finding second highest number in Linklist
void s_high(struct node* head)
{
	llsort(head);
	int cnt=1;
	printf("Second highest number in Linklist is :");
	while (cnt <= 2)
	{
		if(cnt==2)
		printf("%d\t", head->data);
		
		cnt++;
		head = head->next;
	}
	
}

void main()
{
	struct node* first = NULL;
	int choice,n,i;
	do
	{
		printf("1.Createlinklist\n");
		printf("2.Display Linklist\n");
		printf("3.Second highest element in singly linked list\n");
		printf("0.Exit\n");
		printf("Enter the choice\n");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("Enter the total number of elements you want to insert in Linklist\n");
			scanf("%d",&n);
			for(i=0;i<n;i++)
			{
				createlinklist(&first);
			}
			break;
		case 2:
			display(first);
			break;
		case 3:
			s_high(first);
			break;

		}
	} while (choice != 0);
}




