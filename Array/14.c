/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a program in C to find the second largest element in an array*/
#include<stdio.h>
void main()
{
    int a[10],b[10],n,i,j,temp;
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

  
    /* for finding second largest element in array*/
    for(i=0;i<n;i++)
      {
        for(j=i+1;j<n;j++)
        {
           if(a[i]<b[j])
           {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
           }
        }
      }         
         
      printf("Second largest element in an array is %d",a[0]);
       
      
         
}      
