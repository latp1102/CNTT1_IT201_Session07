#include <stdio.h>

int hoanDoi(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int par(int arr[], int left, int right) {
    int pivot = arr[right];
    int i = left - 1;
    for (int j = left; j < right; j++) {
        if (arr[j] < pivot) {
            i++;
            hoanDoi(arr, i, j);
        }
    }
    hoanDoi(arr, i + 1,right);
    return i + 1;
}

int sapXep(int arr[], int left, int right) {
    if (left < right) {
        int pivot = par(arr, left, right);
        sapXep(arr, left, pivot - 1);
        sapXep(arr, pivot + 1, right);
    }
}
int main() {
    int n;
    printf("nhap so luong phan tu: ");
    scanf("%d", &n);
    if (n <= 0 || n >= 1000) {
        printf("so luong phan tu ko hop le");
        return 1;
    }
    int arr[n];
    printf("nhap cac phan tu: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("truoc: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    sapXep(arr, 0, n - 1);
    printf("sau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}