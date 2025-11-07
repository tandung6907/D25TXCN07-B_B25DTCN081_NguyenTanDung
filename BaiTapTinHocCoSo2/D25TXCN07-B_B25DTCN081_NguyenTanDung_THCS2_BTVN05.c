#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    do {
        printf("\n=========== MENU ===========\n");
        printf("1. Tinh tong hai so\n");
        printf("2. Tinh hieu hai so\n");
        printf("3. Tinh tich hai so\n");
        printf("4. Thoat\n");
        printf("============================\n");
        printf("Chon chuc nang (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap hai so: ");
                scanf("%f %f", &num1, &num2);
                result = num1 + num2;
                printf("Tong = %.2f\n", result);
                break;

            case 2:
                printf("Nhap hai so: ");
                scanf("%f %f", &num1, &num2);
                result = num1 - num2;
                printf("Hieu = %.2f\n", result);
                break;

            case 3:
                printf("Nhap hai so: ");
                scanf("%f %f", &num1, &num2);
                result = num1 * num2;
                printf("Tich = %.2f\n", result);
                break;

            case 4:
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
        }
    } while (choice != 4);

    return 0;
}

