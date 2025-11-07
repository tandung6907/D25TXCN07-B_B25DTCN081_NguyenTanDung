#include<stdio.h>
int main  () {
	
	int num, i;
	printf("Nhap vao so phan tu cua mang: ");
	scanf("%d",&num);
	 
	int arr[num];
	for (i=0 ; i<num ; i++){
		printf("So thu %d la: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	int sum=0;
	for (i=0 ; i<num ; i++) {
		if(arr[i]%2!=0){
			sum+=arr[i];	
		}
	}
	printf("Tong cac so le trong day la: %d",sum);
	
	return 0;
}
