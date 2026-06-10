#include<stdio.h>
int main() {
    int size;
    printf("Enter the size of array: \n");
    scanf("%d",&size);

    int arr[size];
    printf("Enter %d elements: \n",size);
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    
    int smallest = arr[0];
    printf("Elements of array are: ");
    for(int i=0;i<size;i++) {
        printf("%d ",arr[i]);
        if(smallest>arr[i]) {
            smallest = arr[i];
        }

    }
    printf("\nLargest element in the array is: %d",smallest);
}