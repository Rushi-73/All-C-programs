/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C Program to find Sum of all elements of each row of a matrix.*/
#include<stdio.h>
void main()
{
   int a[10][10],i,j,m,n,sum;
    
    printf("Enter number of row\n");
    scanf("%d",&m);
    printf("Enter number of column\n");
    scanf("%d",&n);
    
    /*for taking input numbers from user*/
    if(m>10||n>10)
    {
        printf("Please enter valid numbers of rows and column");
    }
    else
    {
       printf("enter the numbers");
       
        for(i=0;i<m;i++)
         {
             for(j=0;j<n;j++)
             {
                 scanf("%d",&a[i][j]);
             }
         }       
     }
     //for reading of matrix
     printf("Matrix is\n");
     for(i=0;i<m;i++)
         {
             for(j=0;j<n;j++)
             {
                 printf("%d\t",a[i][j]);
             }
             printf("\n");
         } 
         
         
       //for finding sum of elements in each row
         for(i=0;i<m;i++)
         {
             sum=0;
             for(j=0;j<n;j++)
             {
                 sum=sum+a[i][j];
             }
              printf("The Sum of all elements in %d row is %d\n",i+1,sum);
         } 
         
        
}  
