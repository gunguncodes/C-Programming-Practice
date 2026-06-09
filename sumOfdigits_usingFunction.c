#include <stdio.h>
void sumOfdigits(int n) {
    int digit;
    int sum = 0;
    while(n!=0) {
        digit = n%10;
        sum += digit;
        n = n/10;
    }
    printf("Sum of digits = %d",sum);
}

int main() {
    sumOfdigits(234);
}