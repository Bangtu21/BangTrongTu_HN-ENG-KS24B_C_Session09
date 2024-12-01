#include<stdio.h>
int main(){
	int n[5]={1,2,3,4,5};
	int number=5;
	int newNumber, index;
	for(int i=0; i<number;i++){
		printf("%d", n[i]);
	}
	printf("\nNhap vi tri ban muon thay doi: ");
	scanf("%d", &index);
	printf("Nhap so ban muon thay doi: ");
	scanf("%d", &newNumber);
	n[index]=newNumber;
	for(int i=0;i<number;i++){
		printf("%d", n[i]);
	}
	return 0;

}
