#include <stdio.h> 
int main() {
    char str[20];
    printf("Enter a word :");
    scanf("%[^\n]",str);
    for(int i =0; str[i]!='\0'; i++) {
        if(str[i]>='a' && str[i]<='z') {
            str[i] = str[i] - 32;
        }
    }
    printf("Word in uppercase :%s",str);
}