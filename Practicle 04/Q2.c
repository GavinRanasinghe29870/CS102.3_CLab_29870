#include<stdio.h>
int main()
{
    char operation;
    double n1,n2;

    printf("Choose an one operation ");
    scanf("%c",&operation);
    printf("Enter Two Numbers ");
    scanf("%lf %lf",&n1,&n2);

    switch(operation)
    {
    case'+':
        printf("%.2f+%.2f=%.2f",n1,n2,n1+n2);
        break;
    case'-':
        printf("%.2f-%.2f=%.2f",n1,n2,n1-n2);
        break;
    case'/':
        printf("%.2f/%.2f=%.2f",n1,n2,n1/n2);
        break;
    case'*':
        printf("%.2f*%.2f=%.2f",n1,n2,n1*n2);
        break;
    }
}
