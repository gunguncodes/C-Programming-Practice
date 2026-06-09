#include<stdio.h> 
void countDigits(int n) {
    int digit = 0;
    while(n!=0) {
        digit++;
        n = n/10;
    }
     printf("Number of digits are %d\n",digit);
}

int main () {
    countDigits(123);
}