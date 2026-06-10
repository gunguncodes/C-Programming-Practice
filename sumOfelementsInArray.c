#include<stdio.h>
int main () {
    int size,sum=0;

    printf("Enter the size of Array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }

    printf("Elements of array : ");
    for(int i=0;i<size;i++) { 
       printf("%d ",arr[i]);
       sum += arr[i];
    }  
    printf("\nSum of all elements of array is %d",sum);


    return 0;

}