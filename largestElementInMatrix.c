#include<stdio.h>
int main () {
    int row,col;
    printf("Enter number of rows: ");
    scanf("%d",&row);
    printf("Enter number of columns : ");
    scanf("%d",&col);

    int matrix[row][col];

    printf("Enter elements\n");
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            printf("Enter matrix [%d] [%d] element: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    int largest = matrix[0][0];

    printf("Elements are : \n");
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            printf("%d ",matrix[i][j]);
            if(matrix[i][j] > largest) {
                largest = matrix[i][j];
            }
        }
        printf("\n");
    }

    printf("Largest element is : %d",largest);
}