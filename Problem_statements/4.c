/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to print all even numbers between 1 to 100. - using
while loop*/


#include<stdio.h>
 
 
void main()
{
   int i=1,rem;
   /* for printing all even numbers 
    between 1 to 100*/
   while(i<=100)
   {
     rem=i%2;
     if(rem==0)   //checking number is even or not
     {
       printf("%d\n",i);
     }
     i++;
   }
}     
