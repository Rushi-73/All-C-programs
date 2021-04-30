/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to find the sum of all the elements of an array.*/
#include<stdio.h>
void main()
{
    int a[10],n,i,sum=0;
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

    /* for finding the sum of all elements*/
    for(i=0;i<n;i++)
      {
        sum=sum+a[i];
      }    
    printf("Sum of all elements in array is %d",sum);
}      
