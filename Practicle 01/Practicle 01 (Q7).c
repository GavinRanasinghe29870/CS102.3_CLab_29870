#include<stdio.h>
int main()
{
    int a,b;
    printf("Input 2 numbers ");
    scanf("%d %d",&a,&b);

    printf("Before swap:a=%d b=%d \n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap Value: a=%d b=%d\n",a,b);


}
