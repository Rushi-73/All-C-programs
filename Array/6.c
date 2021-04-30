/*Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to sort only even numbers in given array.*/

#include<stdio.h>
void main()
{
    int a[20],n,i,j,temp;
    printf("Please enter the number of  elements\n");
    scanf("%d",&n);
    
    if(n<=0 && n>20)
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

   /* for sorting only even numbers in given array*/
   
    for(i=0;i<n;i++)
      {
        for(j=i+1;j<n;j++)
        {
           if(a[i]%2==0 && a[j]%2==0)
           {
           if(a[i]>a[j])
           {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
           }
           }
        }
      }         
         
      printf("ascending order of given numbers are [");
      for(i=0;i<n;i++)
      {
         printf("%d ,",a[i]);
      }
      printf("]\n");   
      
      
    
}      

