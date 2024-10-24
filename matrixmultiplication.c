#include <stdio.h>

int main() {
    int a[10][10],b[10][10],res[10][10], m, n, p, q, i, j, k;

    printf("Enter row of first matrix: ");
    scanf("%d", &m);
    printf("Enter column of first matrix: ");
    scanf("%d", &n);
    
    printf("Enter first matrix: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter row of second matrix:");
    scanf("%d", &p);
    printf("Enter column of second matrix:\n");
    scanf("%d", &q);
    
    printf("Enter second matrix: \n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    if (n == p) {
       
        for (i = 0; i < m; i++) {
            for (j = 0; j < q; j++) {
                res[i][j] = 0;
                for (k = 0; k < n; k++) {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        
        printf("Result: \n");
        for (i = 0; i < m; i++) {
            for (j = 0; j < q; j++) {
                printf("%d", res[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Matrix multiplication not possible\n");
    }

    return 0;
}
