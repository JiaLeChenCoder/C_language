#include <stdio.h>

int sequentialSearch(int arr[], int n, int target) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;  // ����Ŀ��Ԫ���������е�����
        }
    }
    return -1;  // Ŀ��Ԫ�ز����ڣ�����-1
}

int main() {
    int arr[] = { 15, 12, 8, 2, 16, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 15;
    int result = sequentialSearch(arr, n, target);
    if (result == -1) {
        printf("Ŀ��Ԫ�ز�����");
    }
    else {
        printf("Ŀ��Ԫ���������е�����Ϊ��%d ", result);
    }
    return 0;
}
