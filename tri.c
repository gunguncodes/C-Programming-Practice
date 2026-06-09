# include<stdio.h>
int main() 
{int a,b,c;
printf("Enter all the vertices of a triangle: \n");
scanf("%d %d %d",&a,&b,&c);
if ((a+b+c)==180) {
    printf("valid triangle");
}
else {
    printf("not valid");
}
return 0;
}