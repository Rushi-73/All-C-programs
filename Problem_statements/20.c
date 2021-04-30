/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to print all ASCII character with their values.*/
#include<stdio.h>
 void main()
 {
    int i;
    i=0;
    /* for printing all ASCII character with their values. */
    while(i<=255)
    {
       printf("%c = %d\n",i,i);
       i++;
    }
 }      
