#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float cgpa;
};

int main() {
    struct Student students[3];

    for(int i=0;i<3;i++) {
        printf("\nEnter name: ");
        scanf(" %[^\n]",students[i].name);

        printf("Enter age : ");
        scanf("%d",&students[i].age);

        printf("Enter cgpa : ");
        scanf("%f",&students[i].cgpa);

    }

    printf("\n*************Students' info*****************\n");

    for(int i=0;i<3;i++) {
        printf("\nName: %s\n",students[i].name);
        printf("Age: %d\n",students[i].age);
        printf("CGPA: %.2f\n",students[i].cgpa);
    }

    int age = students[0].age;
    int youngest = 0;

    for(int i=0;i<3;i++) {
        if(age > students[i].age) {
            age = students[i].age;
            youngest = i;
        }
    }

    printf("\nYoungest Student is %s",students[youngest].name);
}