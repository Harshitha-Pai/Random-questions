#include <stdio.h>

int main() {
    int n, i, j, temp;

    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    int a[n][n];
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("Enter the value for element (%d, %d): ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    printf("Transpose of the matrix is:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
