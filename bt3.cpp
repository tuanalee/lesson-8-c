#include <stdio.h>

int main() {
    int n;

    
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &n);

   
    if (n <= 0) {
        printf("Vui long nhap mot so nguyen duong.\n");
        return 1; 
    }

    
    int matrix[n][n];

    
    printf("Nhap cac phan tu cho ma tran (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap phan tu [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

   
    printf("Ma tran vuong:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}
