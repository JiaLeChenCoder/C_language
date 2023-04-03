#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int arr1[10][10] = { 0 };
//	int arr2[10][10] = { 0 };
//	// ‰»Î
//	scanf("%d %d", &m, &n);
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for ( j = 0; j < n; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//			if (arr1[i][j] != arr2[i][j])
//			{
//				printf("No\n");
//				return 0;
//			}
//		}
//	}
//	printf("Yes\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int arr[100] = {0};
//	int arr2[100] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int d = 0;
//	scanf("%d", &d);
//	for (i = 0; i < n; i++)
//	{
//		if (d != arr[i])
//		{
//		arr2[j] = arr[i];
//		j++;
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	double p = 0;
//	int day= 0;
//	int month = 0;
//	int a = 0;
//	double value = 0;
//	scanf("%lf %d %d %d", &p,&month, &day, &a);
//	if (day == 11 && month == 11)
//	{
//		value = p * 0.7 - 50 * a;
//	}
//	else if (day == 12 && month == 12)
//	{
//		value = p * 0.8 - 50 * a;
//	}
//	if (value < 0.00)
//		printf("0.00\n");
//	else
//		printf("%.2lf", value);
//	return 0;
//}

#include<stdio.h>
int main()
{
	int year = 0;
	int month = 0;
	int day = 0;
	while (scanf("%d %d", &year, &month) != EOF)
	{
		switch (month)
		{
		case 2:
			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			{
				printf("29\n");
				break;
			}
			else
			{
				printf("28\n");
				break;
			}
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:printf("31\n"); break;
		default:printf("30\n"); break;
		}
	}
}