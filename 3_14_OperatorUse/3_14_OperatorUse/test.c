//#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//����������ʱ������������������������
//	//int a = 3;
//	//int b = 4;
//	//printf("����ǰ��%d %d\n", a, b);
//	//a = a ^ b;
//	//b = a ^ b;
//	//a = a ^ b;
//	//printf("������%d %d", a, b);
//	//return 0;
//	//�ڶ��ַ���
//	int a = 3;
//	int b = 4;
//	printf("����ǰ��%d %d\n", a, b);
//	b= a + b;
//	a = b - a;
//	b = b - a;
//	printf("������%d %d", a, b);
//	return 0;
//
//}

//#include<stdio.h>
//int A(int num)
//{
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	return count;
//}
//int main()
//{
//	//дһ���������ز����������� 1 �ĸ�����
//    //���磺 15    0000 1111    4 �� 1
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	printf("������1�ĸ���=%d\n",A(num));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	    //��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//		int i = 0;
//		int date = 0;
//		int a[32] = { 0 };
//		printf("������һ������");
//		scanf("%d", &date);
//		for (i = 0; i < 32; i++) {
//			a[i] = date % 2;
//			date /= 2;
//		}
//		printf("ż��λΪ:");
//		for (i = 31; i >= 0; i -= 2) {
//			printf("%d", a[i]);
//		}
//		printf("\n");
//		printf("����λΪ:");
//		for (i = 30; i >= 0; i -= 2) {
//			printf("%d", a[i]);
//		}
//		printf("\n");
//		return 0;
//}


//#include<stdio.h>
////����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//int Dif_bits(int m, int n)
//{
//	int count = 0;
//	int value = m ^ n;
//	while (value != 0)
//	{
//		if ((value & 1) == 1)
//		{
//			count++;
//		}
//		value = value >> 1;
//	}
//	return count;
//}
//int main()
//{
//	int num1, num2;
//	scanf("%d %d", &num1, &num2);
//	int count = Dif_bits(num1, num2);
//	printf("%d", count);
//	return 0;
//}

