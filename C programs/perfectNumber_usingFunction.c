#include <stdio.h>
int isPerfect(int n) {
    int sum = 0;
    for(int i=1;i<=n-1;i++) {
        if (n%i==0) {
            sum = sum+i;
        }
    }
    if (sum==n) {
        printf("Perfect number");
    }
    else {
        printf("Not a perfect number");
    }
}

int main() {
    isPerfect(28);
}