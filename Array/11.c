/*Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
write program to sort the array in ascending order*/
#include<stdio.h>
void main()
{
    int a[10],n,n1,i,j,temp;
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

     /* taking new element in array*/
    printf("Enter the new element you want to insert\n");
    scanf("%d",&n1);
    
     /* sorting the array*/ 
    for(i=0;i<n+1;i++)
      {
        for(j=i+1;j<n+1;j++)
        {
           if(a[i]>a[j])
           {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
           }
        }
      }         
         
      printf("ascending order of given numbers are [");
      for(i=0;i<n+1;i++)
      {
         printf("%d ,",a[i]);
      }
      printf("]\n");   
      
      
   
      
         
}      
