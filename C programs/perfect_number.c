#include<stdio.h>
int main() {
    int n;
    int sum = 0;
    printf("Enter a number:");
    scanf("%d",&n);
        for (int i=1;i<=n-1;i++) {
          if (n%i==0) {
            sum +=i;
          }
        }         
    
 if (sum==n) {
    printf("Perfect number");
 }
 else {
    printf("Not a perfect number");
 }
 return 0;
}