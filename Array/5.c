/*Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to copy the elements of one array into another array.*/
#include<stdio.h>
void main()
{
    int a[10],b[10],n,i;
    printf("Please enter the number of  elements\n");
    scanf("%d",&n);
    /* taking input numbers from users*/
    if(n<=0 && n>10)
    {
      printf("Please enter valid number of elements");
    }
    else
    {  
      printf("Enter the numbers\n");
      for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]); 
      }
    }

    /* for copy the elements of one array into another array */
    for(i=0;i<n;i++)
      {
        b[i]=a[i];
      }    
   
     printf("Copied array is [");
     for(i=0;i<n;i++)
      {
        printf("%d ,",b[i]); 
      }
      printf("]");
}      
