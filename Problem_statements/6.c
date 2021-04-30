/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
 Write a C program to find sum of all natural numbers between 1 to n.*/

#include<stdio.h> 
void main()
{
   int num,i=1,sum=0;
   printf("Enter the Number");
   scanf("%d",&num);
   /* for finding addition of all numbers from 1 to
   number given by user*/
   while(i<=num)
   {
       sum=sum+i;
      i++;
   }
       printf("%d\n",sum);
}      

