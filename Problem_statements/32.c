/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to check whether a number is Perfect number or
not*/
#include<stdio.h>
void main()
{
   int num,i,x,rem,sum=0;
    printf("Enter a number");
   scanf("%d",&num);
    x=num;
   /*for checking a given number is Perfect number or not*/
   for(i=1;i<x;i++)/*for printing all factors of given number*/
   {
      rem=x%i;
      if(rem==0)
      sum=sum+i; 
   }
   if(sum==num)
   printf("Given number is Perfect number");
   else
   printf("Given number is not Perfect number");
}   
