#include<stdio.h>
#include<stdlib.h>
int main(){
		printf("nhap so phan tu trong mang");
	int n;
	scanf("%d",&n);
	int numbers[n];
	for(int i=0;i<n;i++){
		printf("numbers[%d]",i);
		scanf(" %d",&numbers[i]);
		}
		do{
			printf("1. In ra cac gia tri cac phan tu cua mang\n");
			printf("2. Nhap gia tri tim kiem va su dung thuat toan tim kiem tuyen tinh tim tat ca cac phan tu trong mang co gia tri bang gia tri tim kiem\n");
			printf("3. Nhap gia tri tim kiem va su dung thuat toan tim kiem nhi phan tim phan tu trong mang\n");
			printf("4. Thoat\n");
			printf("Nhap lua chon ban\n");
			int choice, findNumber, check=0;
			scanf("%d", &choice);
			switch(choice){
				case 1:
					printf("In ra cac gia tri cac phan tu mang:\n");
						for(int i=0;i<n;i++){
					printf("%d", numbers[i]);
				}
					break;
				case 2:
					printf("nhap 1 so ngau nhien");	
			scanf("%d",&findNumber);
			for(int i=0;i<n;i++){
				if(numbers[i]==findNumber){
					printf("mang[%d]=",i);
					printf("%d  ",numbers[i]);
					check=1;
				}		
				}
					if(check==0){
					printf("khong hop le");	
				}
				break;
				case 3:
					break;
				case 4:
					exit(0);
				default:
					printf("Nhap so tu 1-4");
}