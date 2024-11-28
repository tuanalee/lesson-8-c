   #include <stdio.h>

    int main() {
    
    int arr[5] = {10, 20, 30, 40, 50}; 
    int size = sizeof(arr) / sizeof(arr[0]); 

   
    printf("Cac phan tu trong mang tu cuoi ve dau la:\n");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d\n", arr[i]); 
    }
    return 0;
}
