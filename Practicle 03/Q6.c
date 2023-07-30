#include<stdio.h>
int main()
{
    char ch;

    printf("Enter a Character ");
    scanf("%c",&ch);

    printf("Value of your character is %d\n",(int)ch);
    int value=(int)ch;
    if (value>=65&&value<=90)
        printf("This is a Upper Case Leter\n");
    else if (value>=97&&value<=122)
        printf("This is a Lower Case Leter\n");
    else
        printf("This is a Special Character\n");

}
