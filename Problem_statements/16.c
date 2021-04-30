/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to enter a number and print its reverse.*/
#include<stdio.h>
void main()
{
   int n,num,i,j,power,rev=0;
    printf("Enter how many digit number number");
    scanf("%d",&n);
    printf("Enter a number");
    scanf("%d",&num);
    /* for printing reverse number of number given by user*/
    while(num > 10)
    {
       i=num%10;
       num=num/10;
       power=1;
         for(j=1;j<n;j++)
         {
             power=power*10;
         }
       rev=rev+i*power;
       n--;
    }
        rev=rev+num;
    printf("Reverse number of given number is %d",rev);
}    
           
        
