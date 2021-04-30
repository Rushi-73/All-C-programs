/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to find LCM of two numbers.*/
#include<stdio.h>
void main()
{
   int n1,n2,s,b,i,j,lcm,flag=0;
   printf("Enter  numbers to find GCD\n");
   printf("Enter a  first number\n");
   scanf("%d",&n1);
   printf("Enter a second number\n");
   scanf("%d",&n2);
   if(n1<n2)
   {
      s=n1;
      b=n2;
   }  
   else
   {
      s=n2;
      b=n1;
   }
   for(;;)
   {
       for(i=1;i<=10;i++)
       {
           j=b*i;
           if(j%s==0)
           {
               lcm=j;
               printf("LCM of number %d and %d is %d",n1,n2,lcm);
               flag=1;
               break;
           }     
       }
       if(flag==1)
       break;    
   }
   
}      
