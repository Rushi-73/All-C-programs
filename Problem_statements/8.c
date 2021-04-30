/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to find sum of all odd numbers between 1 to n.*/
#include<stdio.h>
 
 
void main()
{
   int i=1,rem,sum=0,num;
   printf("Enter a number");
   scanf("%d",&num);
   /* for finding addition of all odd numbers 
    between 1 to n*/
   while(i<num)
   {
     rem=i%2;
     if(rem==1)   //checking number is odd or not
     {
       sum=sum+i;  //addition of odd numbers
     }
     i++;
   }
   printf("Addition of all odd numbers upto%d is %d",num,sum);
}     
