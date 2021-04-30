/*Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to calculate sum of digits of a number.*/
#include<stdio.h>
void main()
{
   int num,sum=0;
   printf("Enter a number");
   scanf("%d",&num);
   /* for addition of number digits in number 
   given by user */
   while(num != 0)
   { 
      sum=sum+num%10;
      num=num/10;
    
   }
 printf("Sum of number of digits in a number is %d",sum);
}      
