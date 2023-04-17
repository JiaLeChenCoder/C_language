﻿#include<stdio.h>
int removeElement(int* nums, int numsSize, int val) 
{
    int left = 0;
    int right = numsSize;
    int i = 0;
    for (i = 0; i < numsSize; i++)
    {
        if (nums[left] == val)
        {
            nums[left] = nums[right - 1];
            right--;
        }
        else
        {
            left++;
        }
    }
    return left;
}
int main()
{
    //给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。
    //不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。
    //元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。
    int nums[] = { 1,2,3,5,4,6,8,9,4 };
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int len= removeElement(nums,  numsSize, 4);
    printf("%d", len);
	return 0;
}

//给你两个按 非递减顺序 排列的整数数组 nums1 和 nums2，另有两个整数 m 和 n ，分别表示 nums1 和 nums2 中的元素数目。
//请你 合并 nums2 到 nums1 中，使合并后的数组同样按 非递减顺序 排列。
//注意：最终，合并后数组不应由函数返回，而是存储在数组 nums1 中。
//为了应对这种情况，nums1 的初始长度为 m + n，其中前 m 个元素表示应合并的元素，后 n 个元素为 0 ，应忽略。
//nums2 的长度为 n 。
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
//{
//    int p1 = m - 1;
//    int p2 = n - 1;
//    int tail = m + n - 1;
//    int c = 0;
//    while (p1 >= 0 || p2 >= 0)
//    {
//        if (p1 < 0)
//            c = nums2[p2--];
//        else if (p2 < 0)
//            c = nums1[p1--];
//        else if (nums1[p1] > nums2[p2])
//            c = nums1[p1--];
//        else
//            c = nums2[p2--];
//        nums1[tail--] = c;
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int  nums1[] = { 1, 2, 3, 0, 0, 0 };
//    int nums1Size = sizeof(nums1) / sizeof(nums1[0]);
//    int  nums2[] = {2, 5, 6};
//   int nums2Size = sizeof(nums2) / sizeof(nums2[0]);
//   merge(nums1, nums1Size, 3, nums2, nums2Size, 3); int i = 0;
//   for ( i = 0; i < nums1Size; i++)
//   {
//       printf("%d", nums1[i]);
//   }
//    return 0;
//}