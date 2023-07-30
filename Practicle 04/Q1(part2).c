#include<stdio.h>
int main()
{
    int no;

    printf("Enter A Number ");
    scanf("%d",&no);

    switch(no%2)
    {
    case 0:
        printf("%d is an Even Number",no);
        break;
    case 1:
        printf("%d is an Odd Number",no);
        break;
    case -1:
        printf("%d is an Odd Number",no);
        break;
    }
}
