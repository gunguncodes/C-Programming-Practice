#include <stdio.h>
int isPrime(int n) {
    int flag =0;
    if (n<=1) {
        printf("Not prime");
    }
    else {
        for(int i=2;i<=n/2;i++) {
            if(n%i==0) {
                flag = 1;
                break;
            }
        }
        if (flag==0) {
            printf("Prime");
        }
        else {
            printf("Not prime");
        }
    }

}

int main() {
    isPrime(23);
}