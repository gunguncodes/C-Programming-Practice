#include<stdio.h>
void reverse(int n) {
    int rev = 0;
    int rem;
    int og = n;
    while(n!=0) {
        rem = n % 10;
        rev = rev*10 + rem;
        n = n/10;
    }
    printf("Reverse of %d is %d",og,rev);
}

int main () {
    reverse(234);
}