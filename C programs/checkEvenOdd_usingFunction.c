# include<stdio.h> 
void checkEvenOdd(int num)
{
    if(num % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}

int main () {
    checkEvenOdd(10);
}