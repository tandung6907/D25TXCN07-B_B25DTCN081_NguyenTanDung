#include <stdio.h>
#include <math.h>
int main(){
	float x,y,z;
	printf("Nhap vao gia tri x: ",x);
	scanf("%f",&x);
	y=sqrt(x);
	z=pow(x,3);
	printf("Can bac 2 cua x la: %.2f \nLuy thua cua x la: %.0f",y,z);
	return 0;
}
