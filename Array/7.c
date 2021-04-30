/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a program in C to separate odd and even integers in same array.*/
#include<stdio.h>
void main()
{
    int a[10],n,i,j=0,temp;
    printf("Please enter the number of  elements\n");
    scanf("%d",&n);
    /* taking input numbers from users*/
    if(n<=0 && n>10)
    {
      printf("Please enter valid number of elements");
    }
    else
    {  
      printf("Enter the numbers\n");
      for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]); 
      }
    }

    /* for finding separate odd and even integers in same array*/
    
    for(i=0;i<n;i++)
      {
        if(a[i]%2==0)
        {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
          j++;
        } 
     }    
      
   printf("given array is [");
      for(i=0;i<n;i++)
      {
        printf("%d ,",a[i]);
      }    
    printf("]\n");
      
}      
