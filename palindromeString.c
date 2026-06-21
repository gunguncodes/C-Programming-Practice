#include<stdio.h>
int main() {
    char str[20];
    printf("Enter a word:");
    scanf("%[^\n]",str);
    int length = 0;
    for(int i=0; str[i]!=0; i++) {
        length++;
    }

    int palindrome = 1;

    for(int i=0; i<length/2; i++) {
        if(str[i]!=str[length - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome) {
        printf("Palindrome");
    }
    else {
        printf("Not palindrome");
    }
    return 0;
}