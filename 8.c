/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to print lower diagonal elements of matrix.*/
#include<stdio.h>
void main()
{
    int a[10][10],i,j,m,n;
    
    printf("Enter number of row\n");
    scanf("%d",&m);
    printf("Enter number of column\n");
    scanf("%d",&n);
    
    /*for taking input numbers from user*/
    if(m>10||n>10)
    {
        printf("Please enter valid numbers");
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
       /*for printing number of elements of lower diagonal*/
     printf("lower diagonal elements\n");
     for(i=0;i<m;i++)
         {
             for(j=0;j<=i;j++)
             {
                 printf("%d\t",a[i][j]);
             }
             printf("\n");
         }    
}              
