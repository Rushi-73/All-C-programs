
/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program to find frequency of each digit in a given integer.*/
#include<stdio.h>
void main()
{
   int num,i,j,r,x,y,rem,cnt;
   printf("Enter a number");
   scanf("%d",&num);
   y=num;
   z=num;
   while(z!=0)
   { 
      j=z%10;
      temp=z/10;
       if(temp1!=j)
      while(temp!=0)
      {
         k=temp%10;
         temp=temp/10;
        
         if(j==k)
           j=k;
       }    
         cnt=0;
         x=num;
         temp1=j;
     while(x!=0)
     {
        i= x%10;
        if(i==j)
        cnt++;
        x=x/10;
     }
     printf("Number of occurences of %d is %d\n",j,cnt);
     z=z/10;
   }    
}
