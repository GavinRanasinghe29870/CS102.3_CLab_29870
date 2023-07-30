#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter The First Number ");
    scanf("%d",&n1);
    printf("Enter The Second Number ");
    scanf("%d",&n2);

    if(n1%n2==0)
        printf("First Number is a Multiple of the Second Number",n1,n2);
    else
        printf("First Number is Not a Multiple of the Second Number");
}
