#include <stdio.h>
void table(int num) {
   int n = 10;
    for(int i=1;i<=n;i++) {
        printf("%d x %d = %d\n",num,i,num * i);
    }
}

int main() {
    table(5);

}

