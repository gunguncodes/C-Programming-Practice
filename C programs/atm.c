#include<stdio.h>
int main() {
    int balance, withdrawalAmount,remainingAmount;

    printf("Enter your bank account's balance:");
    scanf("%d",&balance);
    printf("Enter your withdrawal amount:\n");
    scanf("%d",&withdrawalAmount);

    remainingAmount=balance-withdrawalAmount;

    if(withdrawalAmount>balance) {
        printf("insufficient balance\n");
    }
    else if (remainingAmount<1000) {
        printf("minimum balance must remain Rs1000\n");
    }
    else
    {printf("Remaining Amount is %d",remainingAmount);}
    
    return 0;

}