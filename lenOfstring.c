#include <stdio.h>
int main() {
   char name[] = "Hello";
   int count = 0;
   for (int i=0; name[i]!='\0';i++) {
    count++;
   }
   printf("Length=%d",count);
}