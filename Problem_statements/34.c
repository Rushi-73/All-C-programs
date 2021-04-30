/*Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to check whether a number is Strong number or not.*/
#include<stdio.h>
void main()
{
   int num,i,j,x,fact,sum=0;
   printf("Enter a number");
   scanf("%d",&num);
   x=num;
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
   if(sum==num)
   printf("Given number is Strong number");
   else
   printf("Given number is not Strong number");
}    
