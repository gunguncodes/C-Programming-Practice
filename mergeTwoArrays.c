#include<stdio.h>  
int main () {
    int size1;
    printf("Enter the size of the 1st array : ");
    scanf("%d",&size1);

    int size2;
    printf("Enter the size of the 2nd array : ");
    scanf("%d",&size2);

    printf("Enter the elements for the 1st array : \n");
    int arr[size1];
    for(int i=0;i<size1;i++) {
        scanf("%d",&arr[i]);
    }

    printf("Enter the elements for the 2nd array : \n");
    int arr1[size2];
    for(int i=0;i<size2;i++) {
        scanf("%d",&arr1[i]);
    }

    int merge[size1 + size2];
    int k=0;
    for(int i=0;i<size1;i++) {
        merge[k] = arr[i];
        k++;
    }

     for(int i=0;i<size2;i++) {
        merge[k] = arr1[i];
        k++;
    }

    printf("Arrays after merging : ");
    for(int i=0; i<(size1+size2); i++) {
        printf("%d ",merge[i]);
    }

}