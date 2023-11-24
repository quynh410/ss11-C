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
		printf("2. Su dung Insertion Sort sap xep cac mang giam dan va in ra\n");
		printf("3. Su dung Selection Sort sawp xep mang tang dan va in ra\n ");
		printf("4. Su dung Bubble Sort sap xep mang giam dan va in ra\n");
		printf("5. Thoat\n");
		printf("Nhap lua chon ban\n");
		int choice;
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("In ra cac gia tri cac phan tu mang:\n");
					for(int i=0;i<n;i++){
				printf("%d", numbers[i]);
				}
				break;
			case 2:
				printf("Su dung Insertion Sort sap xep cac mang giam dan va in ra la :\n");
				for( int i=1;i<n;i++ ){
		  			int key=numbers[i];
		  			int j=i-1;
		  			while(j>=0 && numbers[j]<key){
		  				numbers[j+1]=numbers[j];
		  				j=j-1;
		  				}
		  				numbers[j+1]=key;
		  				}
		  		for(int i=0;i<n;i++){
		        printf("%d ",numbers[i]);
		        }
		  		break;
		  	case 3:
		  		for(int i=0;i<n-1;i++){
	            for(int j=i+1;j<n;j++){
		         if(numbers[i]>numbers[j]){
			     int temp=numbers[i];
			      numbers[i]=numbers[j];
			      numbers[j]=temp;
			    }
			  }
			}
	         for(int i=0;i<n;i++){
		      printf("%d ",numbers[i]);
		  }
		  break;
		  	case 4:
		  		for(int i=0;i<n-1;i++){
	          for(int j=0;j<n-1-i;j++){
		       if(numbers[j]<numbers[j+1]){
			    int temp=numbers[j];
			    numbers[j]=numbers[j+1];
			     numbers[j+1]=temp;
			    }
			   }
			    }
	            for(int i=0;i<n;i++){
		        printf("%d ",numbers[i]);
		        }
		  	  		break;
		  	case 5:
		  		exit(0);
			default:
				printf("Nhap so tu 1-5"); 
		  		break;
	
		}
		
	} while(1==1);
		
}