/*write a program for addition of 2 matrices
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8*/
#include<stdio.h>
void input(int x[10][10],int m,int n);
void display(int x[10][10],int m,int n);
void addition(int x[10][10],int y[10][10],int m,int n,int m1,int n1);
void main()
{
    int a[10][10],b[10][10],i,j,m,n,m1,n1;
    
    printf("Enter number of 1D array\n");
    scanf("%d",&m);
    printf("Enter number of element in 1D array\n");
    scanf("%d",&n);
    
     input(a,m,n);
     printf("Enter number of 1D array in second 2D array\n");
    scanf("%d",&m1);
    printf("Enter number of element in 1D array of second 2D array\n");
    scanf("%d",&n1);
    input(b,m1,n1);
    display(a,m,n);
    display(b,m1,n1);
    addition(a,b,m,n,m1,n1);
}






void input(int x[10][10],int m,int n)
{ 
   int i,j;
   
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
                 scanf("%d",&x[i][j]);
             }
         }       
     }
} 


  //for printing matrix
void display(int x[10][10],int m,int n)
{
    int i,j;
    printf("Elements in 2d array are\n");
     for(i=0;i<m;i++)
         {
             for(j=0;j<n;j++)
             {
                 printf("%d\t",x[i][j]);
             }
             printf("\n");
         }    
} 



   //for addition of 2 matrices
   
void addition(int x[10][10],int y[10][10],int m,int n,int m1,int n1) 
{
  int i,j;
       if(m!=m1&&n!=n1)
       {
            printf("Addition does not possible bacause matrix having different dimension\n");
       }
       else
       {
           printf("Addition of two 2D array is\n");
             for(i=0;i<m;i++)
             {
                 for(j=0;j<n;j++)
                 {
                    printf("%d\t",x[i][j]+y[i][j]);
                 }
               printf("\n");
             }
        }
}                  
                                         
