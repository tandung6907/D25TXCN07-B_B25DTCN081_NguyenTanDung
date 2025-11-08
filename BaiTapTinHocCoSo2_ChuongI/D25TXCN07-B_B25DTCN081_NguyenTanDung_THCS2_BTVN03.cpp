#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap vao gia tri a: ",a);
	scanf("%d",&a);
	printf("Nhap vao gia tri b: ",b);
	scanf("%d",&b);
	if(a>0&&b>0){
		printf("Ca hai so lon hon 0\n");
	}else if(a>0&&b<=0||a<=0&&b>0){
		printf("Mot trong 2 so lon hon 0\n");
	}else{
		printf("Hai so nho hon 0\n");
	}
	if(a%2==0&&b%2==0){
		printf("Ca hai la so chan");
	}else if(a%2==0&&b%2!=0||a%2!=0&&b%2==0){
		printf("Mot trong la so chan");
	}else{
		printf("a va b la so le");
	}
	return 0;
}
