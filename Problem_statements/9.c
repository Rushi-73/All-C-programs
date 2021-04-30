/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to print multiplication table of any number.*/
#include<stdio.h>


void main()
{
    int i,num,mult;
    printf("Enter a number");
    scanf("%d",&num);
    /* for printing multiplication table of number given by user*/
    for(i=1;i<=10;i++)
    {
      mult=i*num;     //multiplication
      printf("%d\n",mult);
    }
}        
