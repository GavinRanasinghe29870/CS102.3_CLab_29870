#include<stdio.h>
int main()
{
    int number,reversedNUmber=0;

    printf("Enter a number: ");
    scanf("%d",&number);

    do{
        int digit=number%10;
        reversedNUmber=reversedNUmber*10 + digit;
        number/=10;
    }
    while(number != 0);

    printf("Reversed number: %d\n",reversedNUmber);
}
