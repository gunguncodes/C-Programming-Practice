#include <stdio.h>
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;   
}

int main() {
    int a;
    int b;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);

    printf("Numbers before swapping : \n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    swap(&a,&b);

    printf("Numbers after swapping : \n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    return 0;
}