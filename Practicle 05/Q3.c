#include<stdio.h>
int main()
{
    int fact,i=0,ans=1;
     printf("Enter a Number ");
     scanf("%d",&fact);

     if (fact==0)
        ans=1;
     else
     for(i=fact;i>0;i--)
     {
         ans *= i;
     }
     printf("Factorial of number %d is %d",fact,ans);

}
