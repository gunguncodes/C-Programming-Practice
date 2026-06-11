#include<stdio.h>
int main () {
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the %d elements of array: \n",size);
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    
    printf("Duplicate elements are : \n"); 
    for(int i=0;i<size;i++) {
        for(int j = i+1; j< size; j++) {
           if (arr[i]==arr[j]) {
             printf("%d ",arr[i]);
           }
        }
      }
}