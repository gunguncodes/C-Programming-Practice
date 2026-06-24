#include <stdio.h>

int sumArray(int *arr, int size) {
   int sum = 0;
    for(int i = 0; i<size; i++) {
        sum += *(arr+i);
    }

    return sum;
}

int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter %d elements of array: \n",size);
    for(int i=0; i<size; i++) {
        scanf("%d",&arr[i]);
    }

    int result = sumArray(arr, size);

    printf("Sum of array is %d",result);

    return 0;
}