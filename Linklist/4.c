/*Name : Sonawane Rushikesh Ganesh
Write a C program to replace given one value with first occurrence of
value in given linked list.*/
#include<stdio.h>
#include<stdlib.h>

//To define a structure for node
struct node 
{
    int data;
    struct node* next;
};

//To define a function for creating a node
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

//To define a function for creating linkedlist
void createlinkedlist(struct node** head)
{
    struct node* newnode=NULL;
    struct node* tempnode=*head;

    newnode=createnode();

    if(*head==NULL)
    {
	  *head=newnode;
    }
    else
    {
	  while(tempnode->next!=NULL)
	  {
		tempnode=tempnode->next;
	  }

	  tempnode->next=newnode;
    }  
}

//To define a function for displaying the linkedlist
void display(struct node* head)
{
    
   
    if(head==NULL)
    {
	 printf("\nLinkedlist is empty!!\n");
    }
    else
    {
	 while(head!=NULL)
	 {
	     printf("%d\t",head->data);
	     head=head->next;
	 }

	 printf("\n");
    }
}

void replace(struct node* head)
{

    int input,replace,cnt;
    
    struct node* temp=head;

    printf("\nPlease enter the no. which you want to replace ");
    scanf("%d",&input);

    printf("\nEnter the value which you want to replace with %d ",input);
    scanf("%d",&replace);
    
    cnt=1;
     while (temp != NULL)
	{ 
		
		
	        if(input==temp->data)
	        cnt++;
	        
	        temp=temp->next;	
	}

      temp=head;
    if(cnt > 1)
    {
      while(temp!=NULL)
      {

	  if(temp->data==input)
	  {
		
		temp->data=replace;
		break;

	  }

	 temp=temp->next;

      }
    }
    else
    printf("Given input number is not repeated\n");

}

void main()
{
    int choice;
    struct node* first=NULL;

    do
    {

      	  
	  printf("1.Create Linkedlist\n");
	  printf("2.Display Linkedlist\n");
	  printf("3.Replace the given number\n");
	  printf("0.Exit\n");

	  printf(" enter your choice\n");
	  scanf("%d",&choice);

	  switch(choice)
	  {

		case 1:
			createlinkedlist(&first);
			break;

		case 2:
			display(first);
			break;

		case 3:
			replace(first);
			break;

	  }

    }while(choice!=0);
}

