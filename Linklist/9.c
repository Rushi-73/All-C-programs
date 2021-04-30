/*Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8*/
/*Write a C program to create linked list to store student information and
print 5 student information using singly linked list.*/
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int rollno;
	char name[25];
	char mobileno[10];
	int marks;
	struct node* next;
};
      //for creating node
struct node* createnode()
{
	struct node* newnode = NULL;
	newnode=(struct node*)malloc(sizeof(struct node));
	if (newnode == NULL)
	{
		printf("Memory allocation failed");
	}
	else
	{
	
		printf("Enter a RollNo\n");
		scanf("%d", &newnode->rollno);
		printf("Enter Name\n");
		scanf(" ");
		fgets(newnode->name,sizeof(newnode->name),stdin);
		printf("Enter Mobile number\n");
		scanf(" ");
		fgets(newnode->mobileno,sizeof(newnode->mobileno),stdin);
		printf("Enter marks\n");
		scanf(" ");
		scanf("%d", &newnode->marks);
	
	}
	newnode->next = NULL;

	return newnode;

}
      //for creating new linklist
void createlinklist(struct node** head)
{
	struct node* newnode = NULL;
	struct node* temp = *head;
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
		printf("%d\t", head->rollno);
		for(i=0;head->name[i]!='\n';i++)
		{
		 	printf("%c", head->name[i]);
		}
		printf("\t");
		for(i=0;head->mobileno[i]!='\n';i++)
		{     
			printf("%c", head->mobileno[i]);
		}
			
		printf("\t%d\n", head->marks);

		head = head->next;
	}
}
void main()
{
	int choice;
	struct node* student = NULL;
	do
	{
		printf("1.Createlink list for student data\n");
		printf("2.Display all student data\n");
		printf("0.exit\n");
		printf("Enter the choice\n");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			createlinklist(&student);
			break;
		case 2:
			display(student);
			break;
		}

	} while (choice != 0);
}
