#include<stdio.h>
int main()
{
    int n1,n2;
   printf("Enter Two Numbers ");
   scanf("%d %d",&n1,&n2);

   if(n1<n2)
    printf("The Highest Number Is %d\n",n2);
   else
    printf("The Highest Number Is %d",n1);
}
