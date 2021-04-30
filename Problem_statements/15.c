/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to calculate product of digits of a number.*/
#include<stdio.h>
void main()
{
   int num,prod=1;
   printf("Enter a number");
   scanf("%d",&num);
   /* for addition of number digits in number 
   given by user */
   while(num != 0)
   { 
      prod=prod*(num%10);
      num=num/10;
    
   }
 printf("Product of number of digits in a number is %d",prod);
}      
