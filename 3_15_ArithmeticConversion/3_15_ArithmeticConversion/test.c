#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	//���������������е����У����������кϲ�Ϊһ���������в������
//	int a[1000];
//	int b[1000];
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	printf("������m,n\n");
//	scanf("%d%d", &m, &n);
//	printf("�������һ������\n");
//	for ( i = 0; i < m; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	printf("������ڶ�������\n");
//	for ( j = 0; j < n; j++)
//	{
//		scanf("%d", &b[j]);
//	}
//	 i = 0;
//	 j = 0;
//	while (i < m && j < n)
//	{
//		if (a[i] >= b[j])
//		{
//			printf("%d ", b[j]);
//			j++;
//		}
//		else
//		{
//			printf("%d ", a[i]);
//			i++;
//		}
//	}
//	if (i == m && j < n)
//	{
//		for(;j<n;j++)
//		printf("%d ", b[j]);
//	}
//	else
//	{
//		for (; i < m; i++)
//		{
//			printf("%d ", a[i]);
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//int main() {
//    //KiKi��֪���Ѿ�������������a��b��c�ܷ񹹳������Σ�����ܹ��������Σ��ж������ε����ͣ��ȱ������Ρ����������λ���ͨ�����Σ���
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
//        if (a + b <= c || a + c <= b || b + c <= a)
//            printf("Not a triangle!\n");
//        else if (a == b && b == c) {
//            printf("Equilateral triangle!\n");
//        }
//        else if (a == b || b == c || a == c)
//            printf("Isosceles triangle!\n");
//        else
//            printf("Ordinary triangle!\n");
//    }
//    return 0;
//}

//#include<stdio.h>
//int main() {
//   /* ����ˮ�ɻ��� - Lily Number������������֣����м��ֳ��������֣�����1461 ���Բ�ֳɣ�1��461��, ��14��61��, ��146��1), 
//    ������в�ֺ�ĳ˻�֮�͵�����������һ��Lily Number��
//    ���磺
//        655 = 6 * 55 + 65 * 5
//        1461 = 1 * 461 + 14 * 61 + 146 * 1
//        ��� 5λ���е����� Lily Number��*/
//    int i, j;
//    for (i = 10000; i < 99999; i++) {
//        int sum = 0;
//        for (j = 10; j <= 10000; j = 10 * j) {
//            sum += (i / j) * (i % j);
//        }
//        if (sum == i)
//            printf("%d ", i);
//    }
//    return 0;
//}

//#include <stdio.h>
//int Fib(int n) {
//    if (n <= 2) {
//        return n;
//    }
//    else {
//        return Fib(n - 1) + Fib(n - 2);
//    }
//}
//int main() {
//    //С�����Ͽ���Ҫ��n��̨�ף���Ϊ���ȱȽϳ�������ÿ�ο���ѡ����һ�׻��������ף���ô��һ���ж������߷���
//    int n = 0;
//    scanf("%d", &n);
//    int ret = Fib(n);
//    printf("%d\n", ret);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}
// 
// 
// 
//#include <stdio.h>
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}