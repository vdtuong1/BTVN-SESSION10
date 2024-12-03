#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i]; // Phan tu can chen
        j = i - 1;

        // Di chuyen cac phan tu lon hon key sang ben phai
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key; // Chen key vao vi tri thich hop
    }
}

int main() {
    int n, i;

    // Khoi tao mang
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Sap xep mang bang Insertion Sort
    insertionSort(arr, n);

    // In mang da sap xep
    printf("Mang sau khi sap xep tang dan:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

