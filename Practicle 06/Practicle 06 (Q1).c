#include<stdio.h>
int main()
{
    int arr[10],i,max,min,sum=0;
    float avg;

    for(i=0;i<10;i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    min=arr[0];
    max=arr[0];

    for(i=0;i<10;i++){
    if (arr[i]<min)
        min=arr[i];
    if(arr[i]>max)
        max=arr[i];
    }


        printf("Minimum value is %d\n",min);
        printf("Maxiimum Value is %d\n",max);
         avg=(float)sum/10;
        printf("Average value is %.2f\n",avg);

    printf("Reverse order of values:\n");
    for(i=9;i>=0;i--)
        {
        printf("%d \n",arr[i]);
        }
}
