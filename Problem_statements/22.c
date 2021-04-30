/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to find all factors of a number.*/
#include<stdio.h>
void main()
{
   int num,i,rem;
    printf("Enter a number");
   scanf("%d",&num);
   /*for printing all factors of given number*/
   for(i=1;i<num;i++)
   {
      rem=num%i;
      if(rem==0)
      printf("%d\t",i);
   }
}      
