#include<stdio.h>
int main(){
	int arr[100], n;
	printf("Moi ban nhap so luong phan tu: ");
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d:", i+1);
		scanf("%d", &arr[i]);
	}
	int index;
	printf("Nhap vi tri muon them phan tu: ");
	scanf("%d", &index);
	
	int item;
	printf("Moi ban nhap gia tri: ");
	scanf("%d", &item);
	
	for(int i=n; i>index; i--){
		arr[i]=arr[i-1];
	}
	//chen gia tri
	arr[index]=item;
	n++;
	printf("Mang sau khi chen: ");
	for(int i=0; i<n;i++){
		printf("%d", arr[i]);
	}
	printf("\n");
	return 0;
}
