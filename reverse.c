#include<stdio.h>
int main() {
    int rev=0,n,rem;
    printf("Enter a number: ");
    scanf("%d",&n);
    int og = n;
    while(n!=0) {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("Reverse of %d is %d",og,rev);
}