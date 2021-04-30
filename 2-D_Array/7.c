/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to find multiplication matrix of two matrices.*/
#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],i,j,m,n,m1,n1,k,l;
    
    printf("Enter number of row for first matrix\n");
    scanf("%d",&m);
    printf("Enter number of column for first matrix \n");
    scanf("%d",&n);
    
    /*for taking input numbers from user for first matrix*/
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
     
     
     printf("Enter number of row for second matrix\n");
    scanf("%d",&m1);
    printf("Enter number of column for second matrix \n");
    scanf("%d",&n1);
    
    /*for taking input numbers from user for second matrix*/
    if(m1>10||n1>10)
    {
        printf("Please enter valid numbers");
    }
    else
    {
       printf("enter the numbers");
       
        for(i=0;i<m1;i++)
         {
             for(j=0;j<n1;j++)
             {
                 scanf("%d",&b[i][j]);
             }
         }       
     }
     
    
    //for multiplication of two matrices 
     
     if(n==m1)
     {
         for(i=0;i<m;i++)
         {
             k=0;
             for(j=0;j<n1;j++)
             {
                  c[i][j]=0;
                  for(l=0;l<m1;l++)
                  {
                      c[i][j]=c[i][j]+a[i][l]*b[l][k];
                  }
                   k++;
             }         
        }
        
        printf("Multiplication matrix is\n");
        for(i=0;i<m;i++)
         {
             for(j=0;j<n1;j++)
             {
                 printf("%d\t",c[i][j]);
             }
             printf("\n");
         }    
     }
     else
     printf("Multiplication cannot take place because number of column of first matrix does not equal to number of rows in second matrix");             
}         
        
        
        
