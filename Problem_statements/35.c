/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to print all Strong numbers between 1 to n.*/
#include<stdio.h>
void main()
{
   int num,i,j,k,x,fact,sum;
   printf("Enter a number");
   scanf("%d",&num);
   /*for printing all strong numbers between 1 to 
   number given by user*/
   for(k=1;k<num;k++)
   {
    x=k;
    sum=0;
   /*for checking the strong number*/
   while(x!=0)
   {
      i=x%10; //take each digit separately
      fact=1;
      for(j=i;j>=1;j--)//taking factorial of each digit
      {
         fact=fact*j;
      }   
      sum=sum+fact;//addtion of all digits factorial
      x=x/10;
   }    
   if(sum==k)
   printf("%d\t",k);
   }
}    
