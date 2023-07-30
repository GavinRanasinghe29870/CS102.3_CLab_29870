#include <stdio.h>

void getArrayFromUser(float array[], int size) {
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%f", &array[i]);
    }
}

void vectorSum(float arr1[], float arr2[], float result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}

int main() {
    int size;


    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Size must be a positive integer.\n");
        return 1;
    }


    float array1[size], array2[size], vectorSumArray[size];


    printf("Enter elements for the first array:\n");
    getArrayFromUser(array1, size);


    printf("Enter elements for the second array:\n");
    getArrayFromUser(array2, size);


    vectorSum(array1, array2, vectorSumArray, size);


    printf("\nFirst Array: ");
    for (int i = 0; i < size; i++) {
        printf("%.2f ", array1[i]);
    }

    printf("\nSecond Array: ");
    for (int i = 0; i < size; i++) {
        printf("%.2f ", array2[i]);
    }

    printf("\nVector Sum Array: ");
    for (int i = 0; i < size; i++) {
        printf("%.2f ", vectorSumArray[i]);
    }

    printf("\n");
}
