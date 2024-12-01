#include<stdio.h>
int main(){
	int arr[100];
	int n, currentLength;
	printf("Nhap so luong phan tu: ");
	scanf("%d",&n);
	currentLength=n;
	
	printf("Chon mot phan tu co trong mang: \n");
	for(int i=0; i<n;i++){
		printf("[%d]= ", i);
		scanf("%d", &arr[i]);
	}
	int indexDelete;
	printf("Nhap vi tri muon xoa: ");
	scanf("%d", &indexDelete);
	if(indexDelete<0 || indexDelete>100){
		printf("Vi tri khong hop le.");
		return 0;
	}
	
	for(int i=indexDelete; i<n-1; i++){
		arr[i]=arr[i+1];
	}
	currentLength--;
	
	printf("Mang sau khi xoa: ");
	for(int i=0; i<currentLength; i++){
		printf("%d", arr[i]);
	}
	printf("\n");
	return 0;
}
