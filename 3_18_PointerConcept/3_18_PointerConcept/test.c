#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;//ָ������Ԫ�صĵ�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}



//#include<stdio.h>
//int main() {
//	int n;	//�ϰ벿������
//	scanf("%d", &n);
//	//�ϰ벿�֣�
//	for (int i = 1; i <= n; i++) 
//	{	//������ѭ������
//		//1����ӡ�ո�
//		for (int j = 0; j < n - i; j++) {
//			printf(" ");
//		}
//		//2����ӡ*��
//		for (int j = 0; j < 2 * i - 1; j++) {
//			printf("*");
//		}
//		//3����ӡ��һ�Ż���
//		printf("\n");
//	}
//	//�°벿�֣�
//	for (int i = 1; i <= n - 1; i++) {
//		for (int j = 0; j < i; j++) {
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * (n - 1 - i) + 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


#include<stdio.h>
//#include<math.h>
//int main()
//{
//	//���0��100000֮������С�ˮ�ɻ������������
//    //��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//    //��:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
//	int num = 0;
//	for (num = 0; num <= 100000; num++)
//	{
//		int count = 1;
//		int sum = 0;
//		int n = 0;
//		n = num;
//		while (n / 10)
//		{
//			count++;
//			n /= 10;
//		}
//		n = num;
//		while (n)
//		{
//			sum += pow(n % 10, count);
//			n /= 10;
//		}
//		if (sum == num)
//		{
//			printf("%d��ˮ�ɻ���\n", num);
//		}
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
    //���磺2 + 22 + 222 + 2222 + 22222
	printf("������һ����\n");
	int a = 0;
	int Sn = 0;
	int t = 0;
	scanf("%d", &a);
	for (int i = 0; i < 5; i++)
	{
		t = 10*t + a;
		Sn += t;
	}
	printf("Sn=%d", Sn);
	return 0;
}