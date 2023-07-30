#include<stdio.h>
int main()
{
    int arr[10],i,count=0;

    for (i=0;i<10;i++){

        printf("Enter a number: ");
        scanf("%d",&arr[i]);

        if(arr[i]%2==0)
            count++;
    }
    printf("\nCount of Even numbers is %d",count);
}

