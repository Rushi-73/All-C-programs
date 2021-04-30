/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to find all prime factors of a number.*/
#include<stdio.h>
void main()
{
   int num,i,j,r,rem=0,flag;
    printf("Enter a number");
   scanf("%d",&num);
   /*for finding all prime factors of given number*/
   printf("Prime factors are :")
   for(i=2;i<num;i++)
   {
      rem=num%i;  //for finding factors
      if(rem==0)
     {   flag=0;
       for(j=2;j<i;j++)
       {
           r=i%j; //for finding prime factors
           if(r==0)
           flag=1;
       }
        if(flag==0)
        printf("%d\t",i);
     }     
   }
}      
