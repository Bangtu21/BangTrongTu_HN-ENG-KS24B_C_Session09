#include<stdio.h>
int main(){
	int arr[100];
	int n, position, value;
	printf("MENU\n1. Nhap vao mang\n2. Hien thi mang\n3. Them phan tu\n4. Sua phan tu\n5. Xoa phan tu\n6. Thoat\n");
	
	int menu;
	printf("Lua chon cua ban la: ");
	scanf("%d", &menu);
	while(menu>6){
		printf("Lua chon cua ban la: ");
		scanf("%d", &menu);	
	}
	while(menu<6){
		switch(menu){
			case 1:
				printf("Nhap so phan tu trong mang: ");
				scanf("%d", &n);
				for(int i=0; i<n;i++){
					printf("Nhap vao phan tu thu %d: ", i+1);
					scanf("%d", &arr[i]);
				}
			break;
			//
			case 2:
				for (int i=0;i<n;i++){
					printf("[%d]", arr[i]);
				}
					printf("\n");
			break;
			//
			case 3:
				printf("Nhap vi tri ban muon them trong mang: ");
				scanf("%d", &position);
				printf("Moi ban nhap gia tri moi: ");
				scanf("%d", &value);
				for(int i=0; i>position;i--){
					arr[i]=arr[i-1];
				}
				arr[position]=value;
				n++;
			break;
			//
			case 4:
				printf("Moi nhap vi tri ban muon thay doi trong mang: ");
				scanf("%d", &position);
				printf("Moi ban nhap vao gia tri moi: ");
				scanf("%d", &value);
				arr[position]=value;
			break;
			//
			case 5:
				printf("Moi nhap vao vi tri muon xoa trong mang: ");
				scanf("%d", &position);
				for(int i=position; i<n-1;i++){
					arr[i]=arr[i+1];
				}	
				n--;
		}
		printf("Lua chon cua ban: ");
		scanf("%d", &menu);
	}
}
