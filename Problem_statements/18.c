
/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to find frequency of each digit in a given integer.*/
#include<stdio.h>
void main()
{
   int num,i,r,x,y,rem,cnt;
   printf("Enter a number");
   scanf("%d",&num);
   y=num;
   while(y!=0) 
   {   
         cnt=0;
         x=num;
         r=y%10;
     while(x!=0)
     {
        i= x%10;
        if(i==r)
        cnt++;
        x=x/10;
     }
     printf("Number of occurences of %d is %d\n",r,cnt);
     y=y/10;
   }    
}
