/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to find sum of all prime numbers between 1 to n.*/
#include<stdio.h>
void main()
{
   int num,i,j,rem,flag,sum=1;
   printf("Enter a number");
   scanf("%d",&num);
   /*for finding addition of all prime numbers between 1 to n*/
  for(j=2;j<num;j++)//for n numbers 
  {
        flag=0;
   for(i=2;i<j;i++)//checking each number by number between 1 to n*/ 
   {
       rem=j%i;
       if(rem==0)
       {
          flag=1;
       }
   }
   if(flag==0)
   sum=sum+j;    //addition of all prime numbers
  }
   printf("Addition of all prime numbers is%d\n",sum);
}     
