#include <stdio.h>
int main() {
    char str[100];
    char ch;
    int count = 0;

    printf("Enter a word: ");
    scanf("%s",str);

    printf("Enter character: ");
    scanf(" %c",&ch);

    for(int i=0;str[i]!='\0';i++) {
        if(str[i] == ch) {
            count++;
        }
    }

    printf("%c occurs %d times",ch,count);

    return 0;


}