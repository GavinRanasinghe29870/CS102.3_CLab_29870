#include<stdio.h>
int main()
{
    int no;
    printf("Enter the Number ");
    scanf("%d",&no);

    if (no%2==0)
        printf("%d is an Even Number",no);
    else
            printf("%d is an Odd Number",no);
}
