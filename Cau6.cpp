#include <stdio.h>

int main() {
    int a, b, choice;

    do {
        printf("Nhap 2 so nguyen a va b : ");
        scanf("%d %d", &a, &b);
        printf("CALCULATOR \n");
        printf("1. Tong 2 so a + b\n");
        printf("2. Hieu 2 so a - b\n");
        printf("3. Tich 2 so a * b\n");
        printf("4. Thuong 2 so a / b\n");
        printf("5. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("%d + %d = %d\n", a, b, a + b);
                break;
            case 2:
                printf("%d - %d = %d\n", a, b, a - b);
                break;
            case 3:
                printf("%d * %d = %d\n", a, b, a * b);
                break;
            case 4:
                if (b != 0) {
                    printf("%d / %d = %.2f\n", a, b, (float)a / b);
                } else {
                    printf("Không the chia cho 0\n");
                }
                break;
            case 5:
                printf("Thoat\n");
                break;
            default:
                printf("Vui long nhap tu 1 - 5\n");
                break;
        }
    } while (choice != 5);
    return 0;
}

