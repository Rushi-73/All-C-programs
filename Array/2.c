/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
An array consist of Integers. Write a C program to count the number of elements less
than , greater than and equal to zero.*/
#include<stdio.h>
void main()
{
    int a[10],n,i,cnt=0,cnt1=0,cnt2=0;
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

    /* for counting the number of elements less
      than , greater than and equal to zero*/
    for(i=0;i<n;i++)
      {
        if(a[i]==0)
        cnt++;
        else if(a[i]>0)
        cnt1++;
        else
        cnt2++;
      }    
    printf("Total number of elements is equals to zero in array is %d\n",cnt);
    printf("Total number of elements is greater than  zero in array is %d\n",cnt1);
    printf("Total number of elements is less than  zero in array is %d\n",cnt2);
}      
