#include <stdio.h>
int main() 
{
	/*С����ѧУ��ѧ¥�ĵ���ǰ���˺ܶ��ˣ�����ǰ����n�����ڵȵ��ݡ�
	����ÿ�ο��Գ���12�ˣ�ÿ��������Ҫ��ʱ��Ϊ4���ӣ�����Ҫ2���ӣ�����Ҫ2���ӣ���
    �����С���ּ��㻹��Ҫ���ٷ��Ӳ��ܳ˵��ݵ���¥�ϡ����������������1�㣩*/
   int a = 0, b = 0;
   scanf("%d",&a);
   if(a<12)
   b=2;
   else
    b =a / 12 * 4 + 2;
    printf("%d",b);
    return 0;
}

//int main() {
//	//���4������������������ҵ�������
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    int max = 0;
//    scanf("%d %d %d %d",&a,&b,&c,&d);
//    if(a>=b&&a>=c&&a>=d)
//    max=a;
//    else if(b>=a&&b>=c&&b>=d)
//    max=b;
//    else if(c>=a&&c>=b&&c>=d)
//    max=c;
//    else
//    max=d;
//    printf("%d",max);
//    return 0;
//}
	//��һ�ֽⷨ
//	int main()
//	{
//    int a,b,c,d,x,y;
//    scanf("%d %d %d %d",&a,&b,&c,&d); 
//    x=a>b?a:b;
//    y=c>d?c:d; 
//    printf("%d",x>y?x:y);  
//    return 0;
//}

//	int main()
//	{
//	//����10���������ֱ�ͳ����������������ĸ�����
//    int a[10]={0};
//    int i = 0;
//    int positive = 0;
//    int negative = 0;
//
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&a[i]);
//    }
//    for(i=0;i<10;i++)
//    {
//            if(a[i]>0)
//            positive++;
//            else
//             negative++;
//    }
//    printf("positive:%d\nnegative:%d\n",positive,negative);
//
//    return 0;
//}

//int main()
//{
//	//����n���ɼ����������n���ɼ�����߷�������ͷ����Ĳ
//    int n = 0;
//    int i = 0;
//    int m = 0;
//    int max = 0;
//    int min = 100;
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&m);
//        if(m>max)
//        max=m;
//        if(m<min)
//        min=m;
//    }
//    printf("�ֲ���%d",max-min);
//    return 0;
//}
