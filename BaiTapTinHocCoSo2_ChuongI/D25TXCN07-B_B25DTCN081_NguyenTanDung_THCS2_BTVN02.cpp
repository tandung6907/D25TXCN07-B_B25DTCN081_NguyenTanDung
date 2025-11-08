#include <stdio.h>
int main(){
	int x,y,tong,hieu,tich,thuong,soDu;
	printf("Nhap vao gia tri x: ",x);
	scanf("%d",&x);
	printf("Nhap vao gia tri y: ",y);
	scanf("%d",&y);
	tong=x+y;
	printf("Tong 2 so: %d",tong);
	hieu=x-y;
	printf("Hieu 2 so: %d",hieu);
	tich=x*y;
	printf("Tich 2 so: %d",tich);
	if(y==0){
		printf("Khong the chia cho 0");
	}else{
		thuong=x/y;
		soDu=x%y;
		printf("Thuong 2 so: %d",thuong);
		printf("Phan du: %d",soDu);
	}
	if(x>y){
		printf("%d>%d",x,y);
	}else if(x==y){
		printf("%d=%d",x,y);
	}else{
		printf("%d<%d",x,y);
	}
	return 0;
}
