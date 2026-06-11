#include<stdio.h>
int main() {
    int size;
    printf("Enter the size of the element : ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter %d elements : \n",size);
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }

    printf("Elements before swapping:\n");
    for(int i=0;i<size;i++) {
        printf("%d",arr[i]);
    }

        int temp = arr[0];
        arr[0] = arr[size-1];
        arr[size-1] = temp;

    printf("\nElements after swapping the 1st and last element: \n");
    for(int i=0;i<size;i++) {
        printf("%d ",arr[i]);
    }
    

}