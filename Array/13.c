/*
Name : Sonawane Rushikesh Ganesh
Write a program in C to find the maximum / minimum element in an array.*/

#include<stdio.h>
void main()
{
    int a[10],n,i,max,min,n1;
    char k;
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

    /* for finding the maximum / minimum element in an array*/
     printf("Which element you want to find\n 1.Maximum\n2.Minimum\n");
     printf("Enter the choice \n");
     scanf("%d",&n1);
     switch(n1)
     {
          case 1:
              max=a[0];
             //for finding maximum element in array
              for(i=0;i<n;i++)
             {
                 if(max<a[i])
                 max=a[i];
             }    
             printf("Maximum value in array is %d\n",max);
             break;
          case 2:
              min=a[0];
             //for finding minimum element in  array
              for(i=0;i<n;i++)
              {
                if(min>a[i])
                min=a[i];
              }    
              printf("Minimum value in array is %d\n",min);
              break;
              
           default:
               printf("wrong choice");
      }
     
               
                  
}      
