#include<stdio.h>
int main()
{
    int arr[10],i;

    for (i=0;i<10;i++){

        printf("Enter a number: ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }
}
