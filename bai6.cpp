#include <stdio.h>

int main() {
    float num1, num2;
    int choice;      
	printf("so thu 1: ");
    scanf("%f", &num1);
    printf("so thu 2: ");
    scanf("%f", &num2);  
    do {
        printf("\nCALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("ban hay chon: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Tong cua %.2f và %.2f là: %.2f\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("Hieu cua %.2f và %.2f là: %.2f\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("Tich cua %.2f và %.2f là: %.2f\n", num1, num2, num1 * num2);
                break;
            case 4:
                if (num2 != 0) {
                    printf("Thuong cua %.2f và %.2f là: %.2f\n", num1, num2, num1 / num2);
                } else {
                    printf("Khong the chia \n");
                }
                break;
            case 5:
                printf("Thoát\n");
                break;
            default:
                printf("chon lai\n");
                break;
        }

        
    } while (choice != 5);
    return 0;
}

