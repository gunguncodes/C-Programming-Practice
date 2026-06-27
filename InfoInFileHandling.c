#include <stdio.h>
int main () {
    FILE *fp;
    fp = fopen("student.txt","w");

    if(fp == NULL) {
        printf("File could not be opened.");
        return 1;
    }
    
    char name[50];
    int age;

    printf("Enter your name : ");
    scanf(" %[^\n]",name);

    printf("Enter your age : ");
    scanf("%d",&age);

    fprintf(fp, "Name : %s\n", name); 
    fprintf(fp, "Age : %d\n",age); 

    fclose(fp);

    return 0;

}