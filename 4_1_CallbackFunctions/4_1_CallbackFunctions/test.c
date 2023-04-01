////#include<stdio.h>
////int main()
////{
////	int a[5] = { 5, 4, 3, 2, 1 };
////	int* ptr = (int*)(&a + 1);
////	printf("%d,%d", *(a + 1), *(ptr - 1));
////	return 0;
////}
//
//#include <stdlib.h>
//#include <string.h>
//#include<stdio.h>
//
////qsort函数的使用者提供这个函数
//int cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p2 - *(int*)p1;//降序  p1-p2升序
//}
//
//void print_arr(int arr[], int sz)//输出
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//test1()
//{
//	int arr[] = { 2,5,6,4,7,8,9,5,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//使用qsort来排序整型数组，要提供一个比较函数，这个比较函数能够比较2个整数的大小
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//
////qsort 排序结构体数据
//struct Stu
//{
//	char name[20];
//	int age;
//};
////根据年龄来比较
//int cmp_stu_by_age(const void* p1, const void* p2)
//{
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;//(struct Stu*)p1结构体指针
//}
////根据名字比较
//int cmp_stu_by_name(const void* p1, const void* p2)
//{
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//}
//
//void test2()
//{
//	struct Stu s[] = { {"zhangsan", 18}, {"lisi", 30}, {"wangwu", 60} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//根据年龄来排序
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	//根据名字来排序
//	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
////假设要升序
////bubble_sort函数可以排序任意类型的数据
//void bubble_sort(void* base, size_t num, size_t width,
//	int (*cmp)(const void* p1, const void* p2))//size_t无符号整型
//{
//	//确定趟数
//	size_t i = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		int flag = 1;//经过交换或者本身已经有序了
//		//一趟冒泡排序的过程
//		size_t j = 0;
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			//两个相邻的元素比较，arr[j] arr[j+1]
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)//升  <降
//			{
//				//交换
//				flag = 0;
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//void test3()
//{
//	int arr[] = { 2,3,6,5,8,9,7,4,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//
//void test4()
//{
//	struct Stu s[] = { {"zhangsan", 20}, {"lisi", 22}, {"wangwu", 21} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//测试按照年龄来排序
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	//测试按照名字来排序
//	//bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	test4();//结果体
//	return 0;
//}
//
//
//
//
//