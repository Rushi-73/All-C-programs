/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to print Fibonacci series up to n terms.*/
#include<stdio.h>
void main()
{
    int num,i,a=0,b=1,c;
    printf("Enter a number");
    scanf("%d",&num);
    /*for printing Fibonacci series upto the number 
    given by user*/
   for(i=0;i<num;i++)
   {
        printf("%d\t",a);
        /* Swapping to get updated a*/
        c=a+b; 
        a=b;
        b=c;    
    }
}          
