#include <stdio.h>
int main() {
    int A[3][2], B[2][3], C[3][3];
    int i, j, k;

    printf("Enter Matrix A (3x2):\n");
    for(i=0;i<3;i++)
        for(j=0;j<2;j++)
            scanf("%d",&A[i][j]);

    printf("Enter Matrix B (2x3):\n");
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
            scanf("%d",&B[i][j]);

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            C[i][j] = 0;

    // Multiplication
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            for(k=0;k<2;k++)
                C[i][j] += A[i][k] * B[k][j];

    printf("Product Matrix:\n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}
