/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to check whether a number is Prime number or not.*/
#include<stdio.h>
void main()
{
   int num,i,rem,flag=0;
   printf("Enter a number");
   scanf("%d",&num);
   /* for checking given number 
   is a prime number or not*/
   for(i=2;i<num;i++)
   {
       rem=num%i;
       if(rem==0)
       {
          flag=1;
          break;
       }
   }
   if(flag==0)
   printf("Given number is a prime number");
   else
   printf("Given number is not a prime number");  
}            
