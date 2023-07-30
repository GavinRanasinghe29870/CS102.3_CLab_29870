#include<stdio.h>
int main()
{

    float cf,ar,rad,dm;
    printf("Enter The Radius Of The Circle: ");
    scanf("%f",&rad);

    dm=rad*2;
    printf("The Diameter Of The Circle is %f\n",dm);
    cf=2*3.14159*rad;
    printf("The Circumference Of The Circle is %f\n",cf);
    ar=3.14159*(rad*rad);
    printf("The Area Of The Circle is %f",ar);

}
