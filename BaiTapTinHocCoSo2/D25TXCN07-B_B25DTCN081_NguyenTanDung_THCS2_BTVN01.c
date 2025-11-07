#include<stdio.h>
int main () {
	
	int age;
	char name[20];
	
	printf("Nhap ten cua ban: \n");
	scanf("%s",&name);
	printf("Nhap tuoi cua ban: \n");
	scanf("%d",&age);
	
	printf("Ten cua ban la %s, ban %d tuoi.",name,age);
		
	return 0;
}
