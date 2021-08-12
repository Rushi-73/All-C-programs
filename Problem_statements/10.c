/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to count number of digits in a number.*/
#include<stdio.h>

void main()
{
   int num,cnt=0;
   printf("Enter a number");
   scanf("%d",&num);
   /* for counting number of digits in number 
   given by user */
   while(num != 0)
   {
      num=num/10;   
      cnt++;     //counting  number of digits
   }
 printf("Count of number of digits in a number is %d",cnt);
}      
