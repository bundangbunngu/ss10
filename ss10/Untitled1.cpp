#include <stdio.h>

int main() {
    int arr[] = {2, 7, 1, 5, 9, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x, i, found = 0;

    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Phan tu %d o vi tri %d\n", x, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Phan tu %d khong ton tai trong mang\n", x);
    }

    return 0;
}

