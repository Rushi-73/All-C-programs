/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to print all natural numbers from 1 to n. - using while loop*/
#include<stdio.h> 
void main()
{
   int num,i=1;
   printf("Enter the Number");
   scanf("%d",&num);
   /* for printing all numbers from 1 to
   number given by user*/
   while(i<=num)
   {
      printf("%d\n",i);
      i++;
   }
}      

