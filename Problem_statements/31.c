/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to print all Armstrong numbers between 1 to n.*/
#include<stdio.h>
void main()
{
   int num,i,j,sum,power,x,cnt,temp,k;
   printf("enter number\n");
   scanf("%d",&num);
   /*for printing all armstrong numbers between 1 to number
   given by user*/
   for(i=1;i<num;i++)
   {
     temp=i;  
     cnt=0;
     /* for counting number of digits  */
     while(temp != 0)
    {
       temp=temp/10;
       cnt++;
    }

    x=i;
    sum=0;
   /*for checking number is armstrong number or not*/
   while(x!=0)
   {
      k=x%10;
      x=x/10;
      power=1;
      for(j=1;j<=cnt;j++)
      {
         power=power*k;
      }
      sum=sum+power;
   }
   if(sum==i)
   printf("%d\n",i);//Printing Armstrong number
   }
}      
