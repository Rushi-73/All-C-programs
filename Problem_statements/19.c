/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to enter a number and print it in words.*/
#include<stdio.h>
void main()
{
   int n,num,i,j,rev=0,power;
    printf("Enter how many digits in number");
    scanf("%d",&n);
   printf("enter number");
  scanf("%d",&num);
  /* reversing the number */
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
    /* for printing given number in words*/    
   while(rev != 0)
   {
       i=rev%10;
       rev=rev/10;
       switch(i)
       {
          case 0:
          printf("Zero");
          break;
          case 1:
          printf("One");
          break;
          case 2:
          printf("Two");
          break;
          case 3:
          printf("Three");
          break;
          case 4:
          printf("Four");
          break;
          case 5:
          printf("Five");
          break;
          case 6:
          printf("Six");
          break;
          case 7:
          printf("Seven");
          break;
          case 8:
          printf("Eight");
          break;
          case 9:
          printf("Nine");
          break;
        }
   }         
}   
   
