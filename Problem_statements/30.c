/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to check whether a number is Armstrong number or
not.*/
#include<stdio.h>
void main()
{
   int n,num,i,j,sum=0,power,x;\
   printf("enter no of digits\n");
   scanf("%d",&n);
   printf("enter number\n");
   scanf("%d",&num);
   x=num;
   /*for checking number is armstrong number or not*/
   while(x!=0)
   {
      i=x%10;
      x=x/10;
      power=1;
      for(j=1;j<=n;j++)
      {
         power=power*i;
      }
      sum=sum+power;
   }
   if(sum==num)
   printf("Given number is Armstrong number ");
   else
   printf("Given number is not Armstrong number ");       
}   
