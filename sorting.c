#include<stdio.h>
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements of array: \n");
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }

    printf("Array after sorting : ");
    for (int i=0;i<size;i++) {
        for (int j=i+1;j<size;j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
          printf("%d ",arr[i]);
    }
}