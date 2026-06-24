#include <stdio.h>
void traverse(int *arr,int size) {
    printf("Array elements are:\n");
    for(int i=0; i<size; i++) {
        printf("%d ",*(arr+i));
    }

}

int main () {
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);

    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    traverse(arr,size);

    return 0;
}