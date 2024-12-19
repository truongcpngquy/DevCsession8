#include<stdio.h> 

int main(){
	int arr[5]={9,8,7,6,5};
	int x,i,kt=0;
	
	printf("Nhap phan tu can tim ");
	scanf("%d",&x);
	
	for( i = 0;i < 5; i++){
		if(arr[i]==x){
				printf("Vi tri phan tu trong mang la %d",i) ;
		kt=1 ;
		}	
	} 
		if(!kt){
			printf("Phan tu khong co trong mang ");	
		}		
	return 0; 
} 
