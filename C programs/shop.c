#include <stdio.h>
int main() {
    int initialAmount = 0;
    int finalAmount = 0;
    printf("Enter the initial amount:");
    scanf("%d",&initialAmount);

    if(initialAmount>=0 && initialAmount<=5000) {
    finalAmount = initialAmount;
    printf("Final Amount is %d",finalAmount);  
    }

    else if(initialAmount>=5001 && initialAmount<=7000) {
    finalAmount = initialAmount -(initialAmount*5/100);
    printf("Final Amount is %d",finalAmount);
    } 

    else if(initialAmount>=7001 && initialAmount<=9000) {
    finalAmount = initialAmount -(initialAmount*10/100);
    printf("Final Amount is %d",finalAmount);
    } 

    else{
    finalAmount = initialAmount - (initialAmount*20/100);
    printf("Final Amount is %d",finalAmount);   
    } 

    return 0;
}