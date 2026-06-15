#include<stdio.h>
int main() {
    int size;
    printf("Enter the size of the element: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the %d elements of array : \n",size);
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    int sorted = 1;
    for(int i=0;i<size-1;i++) {
       if(arr[i]>arr[i+1]) {
        sorted = 0;
        break;
       }
    }
    if(sorted == 0) {
        printf("Array is not sorted");
    }
    else {
        printf("Array is sorted");
    }


}