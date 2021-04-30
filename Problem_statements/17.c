/*Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
write a program to check givcen number is palindrome or not
*/#include<stdio.h>
void main()
{
  int n,num,i,rev=0,j,cnt=0,x,y,m,power;
  printf("enter no of digit");
  scanf("%d",&n);
  printf("enter number");
  scanf("%d",&num);
  x=num; 
  m=n;
 /* /* for  reverse number of number given by user*/ 
    while(x > 10)
    {
       i=x%10;
       x=x/10;
       power=1;
         for(j=1;j<m;j++)
         {
             power=power*10;
         }
       rev=rev+i*power;
       m--;
    }
        rev=rev+x;
       
  x=num;
  y=rev;
  /* To check the given number is palindrome or not*/ 
  while(x!=0 && y!=0)
  {
     i=x%10;
     j=y%10;
     if(i==j)
     cnt++;
     x=x/10;
     y=y/10;  
  }
  if(cnt==n)
  printf("given number is palindrome");
  else
  printf("given number is not palindrome");
 
} 

