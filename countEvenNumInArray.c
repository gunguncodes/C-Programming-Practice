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

    int count = 0;
    for(int i=0;i<size;i++) {
        if(arr[i]%2==0) {
            count++;
        }
    }
    printf("Number of even numbers are %d",count);
}