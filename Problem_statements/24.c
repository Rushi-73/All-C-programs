/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to find HCF (GCD) of two numbers.*/
#include<stdio.h>
void main()
{
   int n1,n2,s,b,i,gcd,m=1;
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
   i=1;
   while(i<=b)
   {
      if(s%i==0)
      {
         if(b%i==0)
         {
            gcd=i;
            if(m<gcd);
            m=gcd;
         }     
      }
      i++;
    }
    printf("GCD of numbers %d and %d is %d",n1,n2,m);
}         
