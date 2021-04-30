/*Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8*/
//Write a C program to accept string with multiple spaces and print count of number character from string in given Singly linked list.
#include<stdio.h>
#include<stdlib.h>

struct node
{
	char* string;
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
	   printf("Please enter the string\n");
	   scanf(" ");
	   char* str=NULL;
           int len=1,i=0;
           char ch;
           str=(char*)malloc(sizeof(char));
           *str='\0';
         
         //for allocating memory for string and inserting 
         
         do
         {
           scanf("%c",&ch);
           len++;
           str=(char*)realloc(str,len*sizeof(char));
           *(str+i)=ch;
           *(str+(i+1))='\0';
           i++;
         }while(ch!='\n');
         
		newnode->string = str;
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
	 int i;
	while (head != NULL)
	{
		
		for(i=0;head->string[i]!='\n';i++)
		{
		 	printf("%c", head->string[i]);
		}
		printf("\n");
		
		head=head->next;
	}	
}

void count(struct node* head)
{
     int cnt,i;
     while (head != NULL)
	{
		cnt=0;
		for(i=0;head->string[i]!='\n';i++)
		{
		 	if(head->string[i]==' ')
		 	continue;
		 	else
		 	cnt++;
		}
	
		head=head->next;
	}
	printf("Number of characters in given string is :%d",cnt);
}
		
void main()
{
	struct node* first = NULL;
	int choice;
	do
	{
		printf("\n1.Createlinklist\n");
		printf("2.Display Linklist\n");
		printf("3.Count number of characters in given string\n");
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
			count(first);
			break;
		}
	} while (choice != 0);
}
