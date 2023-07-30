#include<stdio.h>
int main()
{
    char sdname[20];
    int byear,age;

    printf("Enter the Student Name ");
    scanf("%s",&sdname);

    printf("Enter the Birth Year ");
    scanf("%d",&byear);

    age=2023-byear;

    printf("Student Name: %s \n",sdname);
    printf("Age: %d \n" ,age);



}
