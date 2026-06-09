#include <stdio.h>
int main () {
    int rem,rev=0,n;
    printf("Enter a number:");
    scanf("%d",&n);
    int og = n;
    while(n!=0) {
        rem=n%10;
        rev=rev*10 + rem;
        n = n/10;
    }
    if (og==rev) {
        printf("%d is a Palindrome number.",rev);
    }
    else {
        printf("%d is not a Palindrome number.",rev);
    }
}