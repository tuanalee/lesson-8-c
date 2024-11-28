#include <stdio.h>

int main() {
    
    int n = 4; 
    int matrix[n][n]; 


    printf("Nhap cac phan tu cho ma tran %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]); 
        }
    }

    
    int sum = 0;
    printf("Cac phan tu tren duong cheo chinh: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]); 
        sum += matrix[i][i]; 
    }

   
    printf("\nTong cac phan tu tren duong cheo chinh la: %d\n", sum);

    return 0;
}