/*
Name : Sonawane Rushikesh Ganesh
Write a program in C to delete an element at desired position from an array.*/
#include<stdio.h>
void main()
{
    int a[10],n,n1,i,j,temp;
    printf("Please enter the number of  elements\n");
    scanf("%d",&n);
    
    if(n<=0 && n>10)
    {
      printf("Please enter valid number of elements");
    }
    else
    {  
      printf("Enter the numbers");
      for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]); 
      }
    }

   
   //sorting array in ascending order
    for(i=0;i<n;i++)
      {
        for(j=i+1;j<n;j++)
        {
           if(a[i]>a[j])
           {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
           }
        }
      }         
         
      printf("ascending order of given numbers are [");
      for(i=0;i<n;i++)
      {
         printf("%d ,",a[i]);
      }
      printf("]\n");   
      
     /* for  deleting an element at desired position from an array*/
     printf("Enter the new element\n");
     scanf("%d",&n1);
     
     for(i=0;i<n;i++)
     {
         if(a[i]>n1)
             break;
     }
      temp=i;
     for(i=n-1;i>=temp;i--)
     {
          a[i+1]=a[i]; 
     }
     a[temp]=n1;
      
       for(i=0;i<n+1;i++)
      {
         printf("%d ,",a[i]);
      }
      printf("]\n");  
         
}      
              
