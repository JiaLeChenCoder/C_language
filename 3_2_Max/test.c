#include<stdio.h>
int main()
{
	//дһ�����������������Ľϴ�ֵ
	int a=0;
	int b=0;
	scanf("%d %d",&a,&b);
	if(a>b)
		printf("%d\n",a);
	else
		printf("%d\n",b);
return 0;
}

//int main() {
//    int a = 0;
//    int b = 0;
//  while(scanf("%d %d", &a, &b)!=EOF)
//  {
//     if(a > b)
//     printf("%d>%d\n",a,b);
//     else if(a==b)
//     printf("%d=%d\n",a,b);
//     else
//      printf("%d<%d\n",a,b);   
//  }
//    return 0;
//}

//int main() {
////�������룬�ж���ż��
//   int a = 0;
//   while(   scanf("%d",&a)!=EOF)
//   if(a%2==0)
//   printf("Even\n");
//   else
//    printf("Odd\n");
//    return 0;
//}

//int main() {
//	//�������룬�������֣�������ٸ�*
// int a = 0;
// int i = 0;
// while(scanf("%d",&a)!=EOF)
// for(i=0;i<a;i++)
// printf("*");
//    return 0;
//}

//int main() {
//	//�߶�ͼ��
// int a = 0;
// int i = 0;
// while(scanf("%d",&a)!=EOF)
// {
// for(i=0;i<a;i++)
// {
// printf("*");
// }
// printf("\n");
// }
//    return 0;
//}

//int main() {
////ƽ����
//  int a = 0;
//  int b = 0;
//  int c = 0;
//  int d = 0;
//  int e = 0;
//  scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
//  printf("%.1f",(a+b+c+d+e)*1.0/5);
//    return 0;
//}