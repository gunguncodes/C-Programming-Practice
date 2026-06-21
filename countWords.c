#include <stdio.h>
int main() {
    char str[100];

    printf("Enter a sentence:");
    scanf("%[^\n]",str);

    int words=1;

    for(int i=0; str[i]!=0;i++) {
        if(str[i]==' ') {
            words++;
        }
    }
    printf("Number of words:%d",words);

    return 0;
}