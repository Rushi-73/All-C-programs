/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to check whether given matrix is equal or not.*/
#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],i,j,m,n,m1,n1,f=0;
    
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
     
      printf("Matrix is\n");
        for(i=0;i<m;i++)
         {
             for(j=0;j<n;j++)
             {
                 printf("%d\t",a[i][j]);
             }
             printf("\n");
         }  
       printf("Matrix is\n");
        for(i=0;i<m1;i++)
         {
             for(j=0;j<n1;j++)
             {
                 printf("%d\t",b[i][j]);
             }
             printf("\n");
         }    
         
         
         //for finding given matrices are equal or not
         if(m==m1&&n==n1)
         {
               for(i=0;i<m1;i++)
              {
                 for(j=0;j<n1;j++)
                  {
                      if(a[i][j]!=b[i][j])
                      {
                        f=1;
                         break;
                      }
                      if(f==1)
                      break;
                  }       
               }
               if(f==0)
               printf("Given matrices are equal");
               else
               printf("Given matrices are not equal");
          }
          else
          printf("Given matrices are not equal");
 }         
          
