#include <stdio.h>
#include <string.h>

int sapXep(char str[50]) {
    int n = strlen(str);
    for (int i = 0; i< n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (str[i] > str[j]) {
                int temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str[50];
    printf("nhap chuoi: ");
    fgets(str, 50 , stdin);
    str[strlen(str) - 1] = '\0';
    if (strlen(str) == 0) {
        printf("ko hop le");
    }
    sapXep(str);
    for (int i = 0; i < strlen(str); i++) {
        printf("%c", str[i]);
    }
    return 0;
}