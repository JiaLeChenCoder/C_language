#include <stdio.h>s

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // �ҵ�Ŀ��Ԫ�أ���������
        }

        if (arr[mid] < target) {
            left = mid + 1; // Ŀ��Ԫ�����Ұ벿��
        }
        else {
            right = mid - 1; // Ŀ��Ԫ������벿��
        }
    }

    return -1; // û���ҵ�Ŀ��Ԫ��
}

int main() {
    int arr[] = { 1, 3, 5, 7, 9, 11, 13, 15 ,17,19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;
    int result = binarySearch(arr, 0, n - 1, target);

    if (result == -1) {
        printf("Ŀ��Ԫ��δ�ҵ�  ");
    }
    else {
        printf("Ŀ��Ԫ�ص������ǣ�%d", result);
    }

    return 0;
}
