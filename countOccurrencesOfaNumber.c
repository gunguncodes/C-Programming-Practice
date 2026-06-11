#include<stdio.h>
int main () {
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the %d elements : \n",size);
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    } 

    int search;
    printf("Enter the element to be search : ");
    scanf("%d",&search);
    int count = 0; 
    for(int i = 0; i< size ;i++) {
        if(search == arr[i]) {
            count++;
        }
    }
    printf("\n%d occurs %d times",search,count);
}