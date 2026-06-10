#include<stdio.h>
int main () {
    int size;
    printf("Enter the size of elements: ");
    scanf("%d",&size);
    
    int arr[size];
    printf("Enter %d elements: ",size);
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }

    int search = 0;
    printf("Enter the element to be search: ");
    scanf("%d",&search);
    
    int found = 0;
    for(int i=0;i<size;i++) {
        if(search==arr[i]) {
            found =1;
            break;
        }
    }

    if(found) {
        printf("Found");
    }
     else {
        printf("Not Found");
    }
    
}