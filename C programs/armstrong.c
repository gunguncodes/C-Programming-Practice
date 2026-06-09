#include<stdio.h>
#include<math.h>
int main () {
    int n,og,rem,count=0;
    int sum =0;
    printf("Enter a number:");
    scanf("%d",&n);
    og=n;
    while(n!=0) {
        count++;
        n=n/10;
    }
    n=og;
    while(n!=0) {
        rem = n%10;
        sum = sum + pow(rem, count);
        n=n/10;
        printf("rem=%d count=%d pow=%f\n", rem, count, pow(rem, count));
        printf("sum=%d\n", sum);
    }
    if (sum==og) {
        printf("Armstrong number");
    }
    else {
       printf("Not an Armstrong number"); 
    }
}

//**********************************error***********************************************