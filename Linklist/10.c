/*Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8*/
/*Write a C program to sort student information in ascending order
according to marks of student using singly linked list.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
	int rollno;
	char name[25];
	long mobileno;
	float marks;
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
		scanf("%ld",&newnode->mobileno);
		printf("Enter marks\n");
		scanf(" ");
		scanf("%f", &newnode->marks);
	
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
		   
		printf("%ld", head->mobileno);
		
			
		printf("\t%f\n", head->marks);

		head = head->next;
	}
}
 //for marks vise sorting
void llsort(struct node** head)
{
	float tmarks;
	int trollno;
	char tname[25];
	long tmobileno;
	
	
	struct node* temp = *head;
	struct node* temp1 = *head;
	
	while (temp != NULL)
	{
		temp1 = temp;
		while (temp1 != NULL)
		{
			
			temp1 = temp1->next;
			if (temp1 != NULL)
			{
				if ((temp->marks) > (temp1->marks))
				{

					tmarks = temp->marks;
					temp->marks = temp1->marks;
					temp1->marks = tmarks;
					trollno = temp->rollno;
					temp->rollno = temp1->rollno;
					temp1->rollno = trollno;
					tmobileno = temp->mobileno;
					temp->mobileno = temp1->mobileno;
					temp1->mobileno = tmobileno;
					strcpy(tname,temp->name);
					strcpy(temp->name,temp1->name);
					strcpy(temp1->name,tname);
					
				}
			}
		}
		temp = temp->next;
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
		case 3:
		        llsort(&student);
		        break;
		}

	} while (choice != 0);
}
