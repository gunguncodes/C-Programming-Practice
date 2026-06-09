#include<stdio.h>
int findHCF(int a, int b)
{
    int hcf = 1;

    for(int i = 1; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    return hcf;
}

int findLCM(int a, int b)
{
    return (a * b) / findHCF(a, b);
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("LCM = %d", findLCM(a, b));

    return 0;
}