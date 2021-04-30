/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to find sum of first and last digit of a number.*/
#include<stdio.h>
void main()
{
   int num,first,last,add;
   printf("Enter a number");
   scanf("%d",&num);
   last=num%10; //for getting last number
   while(num!=0)
   {
      first=num%10;  //for getting last number
      num=num/10;
   
   }
    add=first+last;//for addtion of first and last number
 printf("Addition of first digit and last digit is %d",add);
}
