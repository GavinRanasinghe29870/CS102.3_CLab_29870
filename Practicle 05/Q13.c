#include<stdio.h>
int main()
{
    int n,sum=0;

   while(n>=0) {

        printf("Enter a number: ");
        scanf("%d",&n);

        if(n<0)
            break;

    sum += n;
   }
   printf("Sum of numbers: %d",sum);
}
