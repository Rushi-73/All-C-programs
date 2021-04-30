/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a program in C to count the frequency of each element of an array.*/
#include<stdio.h>
void main()
{
    int a[10],n,i,j,k,cnt,f1,x;
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
   /* for finding the count of frequency of each element of an array*/
    for(i=0;i<n;i++)
    {  
       f1=0;
        x=i-1;
        while(x>=0)
        {
            if(a[i]==a[x])
            {
                f1=1;
                break;
            }
           x--;
        }       
                  
           if(f1==0)
           {
            cnt=1;
            for(j=i+1;j<n;j++)
            {
               if(a[i]==a[j])
                {
                   cnt++;
                   
                } 
             }
          printf("Occurences of number %d is %d\n",a[i],cnt);
           }
       }    
 }          
    
                  
