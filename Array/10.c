/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a program to find maximun and minimum number in array*/
#include<stdio.h>
void main()
{
    int a[10],n,i,max,min;
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

    max=a[0];
    for(i=0;i<n;i++)
      {
        if(max<a[i])
        max=a[i];
      }    
    printf("Maximum value in array is %d\n",max);
    
    min=a[0];
    for(i=0;i<n;i++)
      {
        if(min>a[i])
        min=a[i];
      }    
    printf("Minimum value in array is %d",min);
    
}      
