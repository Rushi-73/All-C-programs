/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to print multiplication table of 1 to anu number*/
#include<stdio.h>


void main()
{
    int i,j,num,mult;
    printf("Enter a number");
    scanf("%d",&num);
    for(j=1;j<=num;j++)
    {
    /* for printing multiplication table of number given by user*/
    for(i=1;i<=10;i++)
    {
      mult=i*j;     //multiplication
      printf("%d\n",mult);
    }
  
    }
}        
