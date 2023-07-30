#include<stdio.h>
int main()
{
    int bcsalary,svyear,sales;
    float exallowance,cityallowance,bonus,remuneration;
    char city;

    printf("Enter your Basic salary: ");
    scanf("%d",&bcsalary);

    printf("Enter your year of experience: ");
    scanf("%d",&svyear);

    if(svyear>5)
       exallowance=0.1*bcsalary;
    else
        exallowance=0;

    printf("Are You working in Colombo?(Type 'C' if the city is Colombo,If not type 'N') ");
    scanf("%s",&city);

    if(city=='C')
        cityallowance=2500;
    else
        cityallowance=0;

    printf("Enter Your Monthly Sales ");
    scanf("%d",&sales);

    if(sales>0&&sales<25000)
        bonus=0.1*bcsalary;
    else if(sales>25000&&sales<50000)
     bonus=0.12*bcsalary;
    else
        bonus=0.15*bcsalary;


    remuneration=bcsalary+exallowance+cityallowance+bonus;

    printf("Your Monthly Remuneration is %.2f",remuneration);
}
