#include<stdio.h>
int main()
{
    int num,i;

    printf("Enter an integer: ");
    scanf("%d",&num);

    for (i=1;i<=num;++i) {

        if (num%i==0) {
            printf("%d ",i);
        }
    }
}
