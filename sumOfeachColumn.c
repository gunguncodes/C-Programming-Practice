#include<stdio.h>
int main() {
    int row,col;
    printf("Enter number of rows: ");
    scanf("%d",&row);
    printf("Enter number of column: ");
    scanf("%d",&col);

    int matrix[row][col];

    printf("Enter elements:\n");
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            printf("Element of matrix[%d][%d] : ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("Elements are:\n");
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    int sum;

    for(int j=0;j<col;j++) {
            sum = 0;
        for(int i=0;i<row;i++) {
            sum += matrix[i][j];
        }
         printf("Column %d sum = %d\n",j,sum);
    }
}