#include <stdio.h>
void factorial(int num) {
    int fact = 1;
    for(int i=1;i<=num;i++) {
        fact *= i;
    }
    printf("Factorial of %d is %d",num,fact);
}

int main() {
    factorial(5);
}