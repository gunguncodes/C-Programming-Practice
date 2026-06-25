#include <stdio.h> 

struct Student
{
    char name[50];
    int age;
    float cgpa;
};

int main () {
    struct Student students[3] ;

   for(int i=0;i<3;i++) {
    printf("\nEnter name: ");
    scanf(" %[^\n]",students[i].name);
    printf("Enter age: ");
    scanf("%d",&students[i].age);
    printf("Enter cgpa: ");
    scanf("%f",&students[i].cgpa);
   }

    printf("\n*************Students' info*****************\n");

   for(int i=0; i<3;i++) {
    printf("\nName : %s",students[i].name);
    printf("\nAge : %d\n",students[i].age);
    printf("C.G.P.A : %.2f\n",students[i].cgpa);
   }

    printf("\n-------------Highest marks--------------\n");

    float maxCGPA = 0;
    int topperIndex;
    for(int i=0;i<3;i++) {
        if(maxCGPA < students[i].cgpa) {
            maxCGPA = students[i].cgpa;
            topperIndex = i;
        }
    }
    
    printf("\nName of topper : %s \n",students[topperIndex].name);
    printf("Highest CGPA is %.2f",maxCGPA);
}