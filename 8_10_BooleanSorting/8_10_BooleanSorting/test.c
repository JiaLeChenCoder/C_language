#include <stdio.h>

void booleanSort(int arr[], int n) {
    int min = arr[0], max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    int range = max - min + 1;
    int* count = (int*)malloc(range * sizeof(int));
    memset(count, 0, range * sizeof(int));

    for (int i = 0; i < n; i++) {
        count[arr[i] - min]++;
    }

    int k = 0;
    for (int i = 0; i < range; i++) {
        while (count[i] > 0) {
            arr[k++] = i + min;
            count[i]--;
        }
    }
    free(count);
}

int main() {
    int arr[] = { 5, 2, 3, 1, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    booleanSort(arr, n);
    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
