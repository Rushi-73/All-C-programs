/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to transpose a matrix.*/
#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],i,j,m,n;
    
    printf("Enter number of 1D array\n");
    scanf("%d",&m);
    printf("Enter number of element in 1D array\n");
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
     
     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
             b[j][i]=a[i][j];
         }
     }
     
     printf("Matrix is\n");
     for(i=0;i<m;i++)
         {
             for(j=0;j<n;j++)
             {
                 printf("%d\t",a[i][j]);
             }
             printf("\n");
         }    
         
     
     printf("Transpose of matrix is\n");
      for(i=0;i<m;i++)
         {
             for(j=0;j<n;j++)
             {
                 printf("%d\t",b[i][j]);
             }
             printf("\n");
         }    
             
}     
     
