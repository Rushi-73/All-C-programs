/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to sort first half of array in ascending order and second half of
array in descending order.*/
#include<stdio.h>
void main()
{
    int a[10],b[10],n,h,i,j,temp;
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

     /*for first half of array in ascending order*/
    h=n/2;
    for(i=0;i<h;i++)
      {
        for(j=i+1;j<h;j++)
        {
           if(a[i]>a[j])
           {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
           }
        }
      }         
         
     
      for(i=0;i<h;i++)
      {
         printf("%d ,",a[i]);
      }
 
      
      
      /*for second half of array in descending order*/
      for(i=h;i<n;i++)
      {
        for(j=i+1;j<n;j++)
        {
           if(a[i]<a[j])
           {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
           }
        }
      }         
         
      
      for(i=h;i<n;i++)
      {
         printf("%d ,",a[i]);
      }
       
         
}      
