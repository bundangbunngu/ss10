#include <stdio.h>

int insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    return 0;
}

int binarySearch(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    
    return -1;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;

    insertionSort(arr, n);

    printf("Mang sau khi sap xep: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nNhap so nguyen can tim: ");
    scanf("%d", &x);

    int result = binarySearch(arr, n, x);

    if (result != -1)
        printf("Phan tu %d duoc tim thay o vi tri %d\n", x, result);
    else
        printf("Phan tu %d khong ton tai trong mang\n", x);

    return 0;
}

