#include <stdio.h>
 
    int main(){
    	
    	int arr[5] = {12, 52, 65, 48, 78};
		int size = sizeof(arr) / sizeof(arr[0]);
		int luugiatri;
		int kiemtra = 0 ;
		
		printf("moi nhap phan tu : ");
		scanf("%d", &luugiatri);
		
	    for(int i = 0; i < size; i++){
	    	if(arr[i] == luugiatri){
	    		printf("vi tri phan tu trong mang la: %d\n ", i);
				kiemtra = 1;
				break;
				 
			} 
		} 
    	
    	if(!kiemtra){
    		printf("phan tu khong co trong mang.\n");
		} 
    	
    
    	return 0; 
	} 
