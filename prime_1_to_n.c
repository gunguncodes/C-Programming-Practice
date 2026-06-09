#include <stdio.h>
int main() {
    int i,j,n,flag;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n<=1) {
        printf("Not a prime");
    }
    else {
        for(int i=2;i<=n;i++) {
            flag = 0;
            for(int j=2;j<=i/2;j++) {
                if(i%j==0) {
                    flag=1;
                    break;
                }
            }
            if(flag==0) {
                printf("%d ",i);
            }
        }
    }
    return 0;
}