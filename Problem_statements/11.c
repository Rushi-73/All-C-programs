/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to find first and last digit of a number.*/
#include<stdio.h>
void main()
{
   int num,first,last;
   printf("Enter a number");
   scanf("%d",&num);
   last=num%10; //for getting last number
   while(num!=0)
   {
      first=num%10;  //for getting last number
      num=num/10;
   
   }
 printf("first digit is %d, last digit is %d",first,last);
}
