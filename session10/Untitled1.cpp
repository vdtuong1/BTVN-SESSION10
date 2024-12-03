#include <stdio.h>#include <stdio.h>

int main() {
    int n, i, x, found = 0;

    // Khoi tao mang
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Nhap phan tu can tim
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);

    // Kiem tra phan tu trong mang
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Phan tu %d co ton tai trong mang tai vi tri %d.\n", x, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Phan tu %d khong ton tai trong mang.\n", x);
    }

    return 0;
}

