#include<stdio.h>
int main()
{
      float bcsalary,inc,nwsalary;

    char empname[20];

    printf("Enter employee name ");
    scanf("%s",&empname);
    printf("Enter Basic salary ");
    scanf("%f",&bcsalary);

    if (bcsalary<5000)
        inc=0.05*bcsalary;
    else if (bcsalary>=5000&&bcsalary<10000)
        inc=0.1*bcsalary;
    else
        inc=0.15*bcsalary;

    nwsalary=bcsalary+inc;

    printf("Employee Name: %s \n",empname);
    printf("New Salary: %.2f ",nwsalary);
}
