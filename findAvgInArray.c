#include<stdio.h>
int main() {
    int size, sum = 0, avg;
    printf("Enter the size of array : ");
    scanf("%d",&size);

    int arr[size];
    printf("\nEnter %d elements: \n",size);
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }

    printf("\nElements of array: ");
    for(int i=0;i<size;i++) {
        printf("%d ",arr[i]);
        sum += arr[i];
    }

    printf("\nSum of all elements is %d",sum);
    avg = sum/size;
    printf("\nAverage of all elements is %d",avg);

}