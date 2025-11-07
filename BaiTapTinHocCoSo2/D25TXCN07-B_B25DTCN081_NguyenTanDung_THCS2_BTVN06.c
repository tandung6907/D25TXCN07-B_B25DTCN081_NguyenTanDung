#include <stdio.h>

int main(void) {
    float num, sum = 0;
    int count = 0;

    printf("Nhap cac so (nhap 0 de dung):\n");

    while (1) {
        printf("Nhap so: ");
        scanf("%f", &num);

        if (num == 0) {
            break; 
        }

        sum += num;
        count++;
    }

    if (count > 0) {
        printf("\nTong cac so da nhap: %.2f\n", sum);
        printf("Trung binh cong: %.2f\n", sum / count);
    } else {
        printf("\nKhong co so nao duoc nhap!\n");
    }

    return 0;
}

