//https://leetcode.cn/problems/sort-an-array/
//ÅÅÐòÊý×é
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void A(int* nums, int low, int mid, int high, int* arr) {
    int i, j, k;
    for (k = low; k <= high; ++k)
        arr[k] = nums[k];
    for (i = low, j = mid + 1, k = i; i <= mid && j <= high; ++k) {
        if (arr[i] <= arr[j])
            nums[k] = arr[i++];
        else
            nums[k] = arr[j++];
    }
    while (i <= mid)
        nums[k++] = arr[i++];
    while (j <= high)
        nums[k++] = arr[j++];
}
void Sort(int* nums, int low, int high, int* arr) {
    if (low < high) {
        int mid = (low + high) / 2;
        Sort(nums, low, mid, arr);
        Sort(nums, mid + 1, high, arr);
        A(nums, low, mid, high, arr);
    }
}
int* sortArray(int* nums, int numsSize, int* returnSize) {
    int* arr = (int*)malloc(sizeof(int) * numsSize);
    *returnSize = numsSize;
    Sort(nums, 0, numsSize - 1, arr);
    return nums;
}