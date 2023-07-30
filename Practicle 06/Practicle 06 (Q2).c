#include <stdio.h>


void getArrayInput(int arr[], int size) {
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}


int scalarSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size1, size2;


    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    int array1[size1];
    getArrayInput(array1, size1);


    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    int array2[size2];
    getArrayInput(array2, size2);


    int sumArray1 = scalarSum(array1, size1);
    int sumArray2 = scalarSum(array2, size2);


    printf("Scalar Sum of the first array: %d\n", sumArray1);
    printf("Scalar Sum of the second array: %d\n", sumArray2);


}
