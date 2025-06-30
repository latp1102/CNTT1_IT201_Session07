#include <stdio.h>

int merge(int arr[], int left, int mid, int right) {
    int leftArr = mid - left + 1;
    int rightArr = right - mid;
    int LeftArr[1000], RightArr[1000];
    for (int i = 0; i < leftArr; i++) {
        LeftArr[i] = arr[left + i];
    }
    for (int j = 0; j < rightArr; j++) {
        RightArr[j] = arr[mid + 1 + j];
    }
    int i = 0, j = 0, k = left;
    while (i < leftArr && j < rightArr) {
        if (LeftArr[i] <= RightArr[j]) {
            arr[k] = LeftArr[i];
            i++;
        } else {
            arr[k] = RightArr[j];
            j++;
        }
        k++;
    }
    while (i < leftArr) {
        arr[k++] = LeftArr[i++];
    }
    while (j < rightArr) {
        arr[k++] = RightArr[j++];
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
int main() {
    int n;
    printf("nhap so luong phan tu: ");
    scanf("%d", &n);
    int arr[1000];
    printf("nhap cac phan tu: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("truoc: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    mergeSort(arr, 0, n - 1);
    printf("sau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}