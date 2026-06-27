#include <stdio.h>
int main () {
    FILE *fp;
    fp = fopen("student.txt","r");

    if(fp == NULL) {
        printf("File could not be opened.");
        return 1;
    }
    
    char name[50];
    int age;

    fscanf(fp, "%s", name);
    fscanf(fp, "%d",&age);

    printf("%s\n",name);
    printf("%d\n",age);

    fclose(fp);

    return 0;

}