/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to print all Perfect numbers between 1 to n.*/
#include<stdio.h>
void main()
{
   int num,i,j,x,rem,sum;
   printf("Enter a number");
   scanf("%d",&num);
   /*for printing all perfect numbers between 1 to n*/
   for(i=1;i<num;i++)
   {
    x=i;
    sum=0;
   /*for checking a given number is Perfect number or not*/
   for(j=1;j<x;j++)/*for printing all factors of given number*/
   {
      rem=x%j;
      if(rem==0)
      sum=sum+j; 
   }
   if(sum==i)
   printf("%d\n",i);
   }
}   
