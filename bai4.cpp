#include <stdio.h>

int main() {
    int n; 
    do {
        printf("Nhap 1 so nguyen tu 1 den 10: ");
        scanf("%d", &n);

        if (n < 1 || n > 10) {
            printf("Vui long nhap 1 so tu 1 den 10\n");
        }
    } while (n < 1 || n > 10);

    printf("Bang cuu chuong cua %d la:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
return 0;
}
