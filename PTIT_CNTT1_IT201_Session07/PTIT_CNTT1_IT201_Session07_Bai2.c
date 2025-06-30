#include <stdio.h>

int selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int key = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[key]) {
                key = j;
            }
        }
        if (key != i) {
            int temp = arr[i];
            arr[i] = arr[key];
            arr[key] = temp;
        }
    }
}

int main() {
    int n;
    printf("nhap so luong phan tu: ");
    scanf("%d", &n);
    if ( n <= 0 || n >= 1000) {
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
    selectionSort(arr, n);
    printf("sau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}