/*
Name : Sonawane Rushikesh Ganesh
ID      : 1126
Batch : PPA8
Write a C program that return the positions of the pallindrome element in array.*/
#include<stdio.h>
 
void main()
{
     int a[10],i,n,m,temp,cnt,j,k,rev,power,total,num,b;
       printf("Please enter the number of  elements\n");
       scanf("%d",&n);
       /* taking input numbers from users*/
       if(n<=0 && n>10)
       {
         printf("Please enter valid number of elements");
       }
       else
       {  
         printf("Enter the numbers\n");
         for(i=0;i<n;i++)
         {
           scanf("%d",&a[i]); 
         }
       }
       
       /* for finding position of palindrome elements */
     printf("Position of palindrome elements are :");
     for(i=0;i<n;i++)
        {
           num=a[i];
           total=0;
            while(num != 0)
            {
              num=num/10;
              total++;
            }
            
            m=total;
            
             num=a[i];
             rev=0;
          while(num > 10)
         {
            
           b=num%10;
           num=num/10;
           power=1;
           for(j=1;j<total;j++)
            {
             power=power*10;
            }
           rev=rev+b*power;
            total--;
         }
         rev=rev+num;  
   
            
            temp=a[i];
            cnt=0;
            while(rev!=0 && temp!=0)
            {
                j=rev%10;
                k=temp%10;
                if(j==k)
                cnt++;
                rev=rev/10;
                temp=temp/10;
            }
            if(cnt==m)
            printf("%d\n",i+1);
         }
     }
     
     
     
       
