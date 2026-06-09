#include<stdio.h>
int main() {
    int cp,sp;
    printf("Enter cost price: ");
    scanf("%d",&cp);
    printf("Enter selling price: ");
    scanf("%d",&sp);

    if (cp==sp){
        printf("no profit no loss");
    }
    else if (sp>cp) {
        printf("profit");
    }
    else {
        printf("loss");
    }
    return 0;
}