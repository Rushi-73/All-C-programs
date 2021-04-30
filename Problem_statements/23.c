/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to calculate factorial of a number.*/
#include<stdio.h>
void main()
{
   int num,i,fact=1;
   printf("Enter a number");
   scanf("%d",&num);
   /* for finding factorial of number given by user*/
   for(i=num;i!=0;i--)
   {
       fact=fact*i;
   }
   printf("Factorial of %d is %d",num,fact);
}       
