#include <stdio.h>
int main () {
   int arr[5],i;
   printf("Enter 5 elements: ");
   for(int i=0;i<5;i++) {
    scanf("%d",&arr[i]);
   }
   printf("Elements are:");
   for(int i=0;i<5;i++); {
    printf("%d",arr[i]);
   }

}