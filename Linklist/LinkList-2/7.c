/*Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8*/
//Write a C program to check whether strings are Anagram strings or not in given Singly linked list
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
  
 /* void input(char *str)
  {
       printf("Please enter the string\n");
	   scanf(" ");
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
         
   } */     
  
  //for cheking whether strings are Anagram strings or not in given Singly linked list
void anagram(struct node* head)
{
	int i=0,j,l1=0,l2=0,f=0,cnt=0;
	char t;
	char strin[20];
	struct node* temp = head;
	char *string1;
	  printf("Please enter the string\n");
	   scanf(" ");
           int len=1;
           char ch;
           string1=(char*)malloc(sizeof(char));
           *string1='\0';
         
         //for allocating memory for string and inserting 
         
         do
         {
           scanf("%c",&ch);
           len++;
           string1=(char*)realloc(string1,len*sizeof(char));
           *(string1+i)=ch;
           *(string1+(i+1))='\0';
           i++;
         }while(ch!='\n');
	
	  for(i=0; string1[i]!='\n'&& string1[i]!='\0';i++)
               	l2++; 
               	
               for(i=0;i<l2;i++)
      		{
        		for(j=i;j<l2;j++)
        		{	
               	    if(string1[i] > string1[j])
           			{
             			 	t=string1[i];
              				string1[i]=string1[j];
              				string1[j]=t;
           			}
           		}
           	} 				
      while(temp!=NULL)
      {
          l1=0;
        for(i=0; temp->string[i]!='\n'&& temp->string[i]!='\0';i++)
        {
            strin[i]=temp->string[i];
            l1++;
        }   
           strin[i]='\0';
           
	if(l1==l2)
  	{  
    		for(i=0;i<l1;i++)
      		{
        		for(j=i;j<l1;j++)
        		{
           			if(strin[i] > strin[j])
           			{
              				t=strin[i];
              				strin[i]=strin[j];
              				strin[j]=t;
           			}
           			
        		}
      		}
        
		
      		for(i=0;i<l1;i++)
      		{
      
       		 if(strin[i]!=string1[i])
       		 {
        		     f=1;	    
        		    break;
       		 }
        
      		}
      		if(f==0)
      		{
      		    cnt++;
      		    for(i=0;temp->string[i]!='\n';i++)
      		    {
			printf("%c",temp->string[i]);
		     }
		     printf("\n");
		}     	
                     
	 }
         temp=temp->next;
      } 
      
      printf("Number of strings that are Anagram is %d",cnt);  
}
void main()
{
	struct node* first = NULL;
	char* str=NULL;
	int choice;
	do
	{
		printf("\n1.Createlinklist \n");
		//printf("2.String for search\n");
		printf("3.Anagram\n");
		printf("0.Exit\n");
		printf("Enter the choice\n");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			createlinklist(&first);
			break;
		/*case 2:
			input(str);*/
		case 3:
			anagram(first);
			break;
		
		}
	} while (choice != 0);
}
