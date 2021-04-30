/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to check whether given matrix is sparse or not.*/
#include<stdio.h>
void main()
{
    int a[10][10],i,j,m,n,cnt=0,cnt1=0;
    
    printf("Enter number of rows\n");
    scanf("%d",&m);
    printf("Enter number of column\n");
    scanf("%d",&n);
    
    /*for taking input numbers from user*/
    if(m>10||n>10)
    {
        printf("Please enter valid number of rows and column");
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
     
     
     //for printing matrix
     printf("Matrix is\n");
       for(i=0;i<m;i++)
          {
             for(j=0;j<n;j++)
             {
                 printf("%d\t",a[i][j]);
             }
             printf("\n");
          }   
          
         
         //for matrix is sparse matrix or not 
        for(i=0;i<m;i++)
          {
             for(j=0;j<n;j++)
             {
                 if(a[i][j]==0) 
                 {
                     cnt++;
                 } 
                 else 
                 cnt1++;       
             }
            
          }  
          
          
          if(cnt>cnt1)
          printf("Matrix is Sparse matrix");
          else   
          printf("Matrix is not Sparse matrix");
}
