#include<stdio.h>
void matrix(int a, int b,int matrix[a][b]){
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int r1,r2,c1,c2;
    printf("Enter the number of rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the number of rows and columns for 2nd matrix: ");
    scanf("%d %d", &r2, &c2);
    int matrix1[r1][c1], matrix2[r2][c2], result[r1][c2];
    if(c1 != r2){
        printf("Matrix multiplication not possible\n");
        return 0;
    }
    else {

        // Initialize result matrix with 0
        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c2; j++) {
                result[i][j] = 0;
            }
        }
        // Initialize result matrix to 0
        printf("Enter the elements of matrix1:");
        matrix(r1,c1,matrix1);
        printf("Enter the elements of matrix2:");
        matrix(r2,c2,matrix2);
        // Matrix multiplication
        for(int i = 0; i < r1 ;i++){
            for(int j = 0; j <c2; j++){
                for(int k = 0; k < c1; k++){
                    result[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }
        // printing result matrix
        printf("Resultant matrix:\n");
        for(int i = 0; i < r1; i++){
            for(int j = 0; j < c2; j++){
                printf("%d ",result[i][j]);
            }
            printf("\n");
        }
        
    }
    return 0;
}