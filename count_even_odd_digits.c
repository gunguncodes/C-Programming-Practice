#include<stdio.h>
int main() {
    int n,digit;
    int evenCount=0;
    int oddCount=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0) {
        digit=n%10;
        if(digit%2==0) {
            evenCount++;
        }
        else {
            oddCount++;
        }
        n = n/10;
    }
    printf("Even digits = %d\n",evenCount);
    printf("Odd digits = %d\n",oddCount);
}