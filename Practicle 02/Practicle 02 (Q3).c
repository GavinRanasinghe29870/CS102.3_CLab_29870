#include <stdio.h>
int main ()
{
    int avs,dt,tt;
    printf("Enter the distance travelled in meters ");
    scanf("%d",&dt);
    printf("\nEnter the time taken in seconds: ");
    scanf("%d",&tt);
    avs=dt/tt;
    printf("The Average Speed is %d m/s\n",avs);

}






#include <stdio.h>
int main ()
{
    float avs,dt,tt;
    printf("Enter the distance travelled in meters ");
    scanf("%f",&dt);
    printf("\nEnter the time taken in seconds: ");
    scanf("%f",&tt);
    avs=dt/tt;
    printf("The Average speed is %.2f m/s\n",avs);

}
