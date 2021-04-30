/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to swap first and last digits of a number.*/
#include<stdio.h>
void main()
{
    int i,j,n,num,last,first,swap=0,power=10,m=1;
    printf("Enter how many digit number number");
    scanf("%d",&n);
    printf("Enter a number");
    scanf("%d",&num);
    last=num%10;//getting last digit from number
    num=num/10; 
     for(i=1;i<n-1;i++)
   {
      power=power*10;
   }
    swap=last*power;
    /*for swapping last number and first digit*/
    while(num > 10)
    {
       j=num%10;
       num=num/10;
       power=10;
        for(i=1;i<m;i++)
   {
      power=power*10;
   }
      m++;
      swap=swap+j*power;
   }
     swap=swap+num;
   printf("swapping of first and last digit is %d",swap); 
}   
      
