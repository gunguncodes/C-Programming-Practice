#include <stdio.h>
int main () {
    char str[20];
    printf("Enter word :");
    scanf("%[^\n]",str);
    int alphabets = 0;
    int digits =0;
    int special = 0;
    int spaces=0;
    for(int i=0;str[i]!='\0';i++) {
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z') ) {
            alphabets++;
        }
        else if (str[i]>='0' && str[i] <='9') {
            digits++;
        }
        else if(str[i] == ' ') {
            spaces++;
        }
        else {
            special++;
        }
    }
    printf("Alphabets = %d\n",alphabets);
    printf("Digits = %d\n",digits);
    printf("Special characters = %d\n",special);
    printf("Spaces = %d",spaces);
} 