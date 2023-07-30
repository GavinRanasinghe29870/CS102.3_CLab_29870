#include<stdio.h>
int main()
{
    int number,n,i,ans=1;

    printf("Enter a number: ");
    scanf("%d",&number);

    printf("Enter nth value: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++) {

        ans=ans*number;

    }
    printf("Answer is %d\n",ans);

}
