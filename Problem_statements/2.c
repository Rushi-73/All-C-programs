/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to print all natural numbers in reverse (from n to 1). -
using while loop*/

#include<stdio.h> 
void main()
{
   int num,i=1;
   printf("Enter the Number");
   scanf("%d",&num);
   /* for printing all numbers from number given by user to
   1
  */
   while(i<=num)
   {
      printf("%d\n",num);
      num--;
   }
}      

