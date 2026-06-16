#include<stdio.h>
int main() {
 int row,col;
 printf("Enter row and column : ");
 scanf("%d",&row);
 scanf("%d",&col);

 int matrix[row][col];

 printf("Enter elements : \n");
 for(int i=0;i<row;i++) {
    for(int j=0;j<col;j++) {
        printf("Enter matrix [%d] [%d] elements: ",i,j);
        scanf("%d",&matrix[i][j]);
    }
 }

 printf("\nElements are : \n");
 for(int i=0;i<row;i++) {
    for(int j=0;j<col;j++) {
        printf("%d ",matrix[i][j]);
    }
    printf("\n");
 }


}