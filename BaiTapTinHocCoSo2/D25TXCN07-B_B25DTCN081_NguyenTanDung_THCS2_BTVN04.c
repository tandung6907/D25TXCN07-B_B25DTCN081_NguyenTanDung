#include<stdio.h>
int main () {
	
	int age;
	printf("Nhap vao do tuoi cua nguoi dung: ");
	scanf("%d",&age);
	
		if (age<0||age>100) {
			printf("Vui long nhap lai so tuoi cua nguoi dung!!!");
		} else if (age<=12) {
			printf("Tre em");
		} else if (age<=17) {
			printf("Thanh thieu nien");
		} else if (age<=59) {
			printf("Nguoi lon");
		} else {
			printf("Nguoi cao tuoi");
	
		}	

	return 0;
}
