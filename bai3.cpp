#include <stdio.h>

int main() {
    int n;          
    int sum = 0; 
    int i = 1;     

    do {
        printf("Nhap 1 so nguyen duong: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("Vui l�ng nhap so nguyen duong \n");
        }
    } while (n <= 0);

    
    while (i <= n) {
        sum += i; 
        i++;      
    }

    printf("Tong cac so la %d l�: %d\n", n, sum);

    return 0;
}
