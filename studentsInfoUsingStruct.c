#include <stdio.h> 

struct Student
{
    char name[50];
    int age;
    float cgpa;
};

int main () {
    struct Student s1, s2, s3 ;

    printf("Enter name: ");
    scanf("%s",s1.name);
    printf("Enter age: ");
    scanf("%d",&s1.age);
    printf("Enter cgpa: ");
    scanf("%f",&s1.cgpa);

    printf("\nEnter name: ");
    scanf("%s",s2.name);
    printf("Enter age: ");
    scanf("%d",&s2.age);
    printf("Enter cgpa: ");
    scanf("%f",&s2.cgpa);

    printf("\nEnter name: ");
    scanf("%s",s3.name);
    printf("Enter age: ");
    scanf("%d",&s3.age);
    printf("Enter cgpa: ");
    scanf("%f",&s3.cgpa);

    printf("\n*************Students' info*****************\n");

    printf("Name : %s\n",s1.name);
    printf("Age : %d",s1.age);
    printf("\nC.G.P.A : %.2f\n",s1.cgpa);

    printf("\nName : %s\n",s2.name);
    printf("Age : %d",s2.age);
    printf("\nC.G.P.A : %.2f\n",s2.cgpa);

    printf("\nName : %s\n",s3.name);
    printf("Age : %d",s3.age);
    printf("\nC.G.P.A : %.2f\n",s3.cgpa);
}
