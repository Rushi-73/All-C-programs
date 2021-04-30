/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to find power of a number using for loop.*/
#include<stdio.h>
void main()
{
   int i,num,p,power=1;
   printf("Enter a number");
   scanf("%d",&num);
   printf("Enter a power of number");
   scanf("%d",&p);
   /* for finding power of given number*/
   for(i=1;i<=p;i++)
   {
      power=power*num;
   }
   printf("Power of number is %d",power);   
}   
