#include <stdio.h>
int main() {
    int n;
    int digit=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0) {
        digit++;
        n=n/10;
    }
     printf("Number of digits are %d",digit);

}