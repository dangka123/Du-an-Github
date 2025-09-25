#include <stdio.h>

struct Product {
    char name[50];
    int quantity;
    float price;
};

int main() {
    int n, i;
    float totalRevenue = 0;

    printf("Nhap so luong san pham: ");
    scanf("%d", &n);

    struct Product products[n];

    // Nhap thong tin san pham
    for (i = 0; i < n; i++) {
        printf("\nNhap ten san pham %d: ", i + 1);
        scanf("%s", products[i].name);
        printf("Nhap so luong: ");
        scanf("%d", &products[i].quantity);
        printf("Nhap gia ban: ");
        scanf("%f", &products[i].price);
    }

    // In bao cao doanh so
    printf("\n=== BAO CAO DOANH SO BAN HANG ===\n");
    for (i = 0; i < n; i++) {
        float revenue = products[i].quantity * products[i].price;
        totalRevenue += revenue;
        printf("San pham: %-10s | SL: %d | Gia: %.0f | Doanh thu: %.0f\n",
               products[i].name, products[i].quantity, products[i].price, revenue);
    }

    printf("-----------------------------------------\n");
    printf("TONG DOANH THU: %.0f VND\n", totalRevenue);

    return 0;
}
