/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to print all odd number between 1 to 100.*/

#include<stdio.h>
 
 
void main()
{
   int i=1,rem;
   /* for printing all odd numbers 
    between 1 to 100*/
   while(i<=100)
   {
     rem=i%2;
     if(rem==1)   //checking number is odd or not
     {
       printf("%d\n",i);
     }
     i++;
   }
}     
