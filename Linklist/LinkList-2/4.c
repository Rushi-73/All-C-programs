/*Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8*/
//Write a C program to print all armstrong numbers from given singly linked list.
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


void armstrong(struct node* head)
{
	int i,j,x,cnt,sum,power;
   	
   	printf("Armstrong numbers are :");
   /*for checking the Armstrong number*/
   while(head!=NULL)
   {
        x=head->data;
        sum=0;
        cnt=0;
        
        while(x!=0)
   	{
   	        x=x/10;
   		cnt++;
        }
        x=head->data;		
   	while(x!=0)
   	{
   		 i=x%10;
      		x=x/10;
      		power=1;
      		for(j=1;j<=cnt;j++)
      		{
         		power=power*i;
      		}
       	sum=sum+power;
   	}    
   	if(sum==head->data)
   	printf("%d\t",head->data);
   head=head->next;
  }
} 

void main()
{
	struct node* first = NULL;
	int choice,n,i;
	do
	{
		printf("\n1.Createlinklist\n");
		printf("2.Display Linklist\n");
		printf("3.Armstrong numbers in the link list\n");
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
			armstrong(first);
			break;

		}
	} while (choice != 0);
}

   
