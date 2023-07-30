#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,total;
    float avg;

    printf("Enter 10 numbers ");
    scanf("%d %d %d %d %d %d %d %d %d %d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);

    total=n1+n2+n3+n4+n5+n6+n7+n8+n9+n10;

    printf("The Total of 10 Marks is %d",total);

    avg=(float)total/10;
    printf("\nAvarage is %.2f",avg);

    if (avg<50)
        printf("\nProgram Fail",avg);
    else
        printf("\nProgram Pass",avg);
}
