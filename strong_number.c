#include<stdio.h>
int main() {
    int fact,n,digit;
    int sum =0;
    printf("Enter a number:");
    scanf("%d",&n);
    int og = n;
    while(n!=0) {
        digit = n%10;
        fact = 1;
        for (int i=1;i<=digit;i++) {
            fact = fact*i;
        } 
        n = n/10;
        sum += fact;
    }
    
 if (sum==og) {
    printf("Strong number");
 }
 else {
    printf("Not a strong number");
 }
 return 0;
}