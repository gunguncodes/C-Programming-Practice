#include <stdio.h>
int main() {
    char str[100];

    printf("Enter a sentence: ");
    scanf("%[^\n]",str);

    printf("After removing spaces: ");

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ')
        {
            printf("%c",str[i]);
        }
    }
    return 0;
}