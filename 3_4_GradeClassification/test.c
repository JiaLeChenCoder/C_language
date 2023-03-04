#include <stdio.h>
//int main()
//{
//分数划分等级
//    int score = 0;
//    scanf("%d", &score);
//    int a= score / 10;
//    if (score >= 0)
//    {
//        switch(a)
//          {
//              case 9:
//              case 10:
//                  printf("A\n");
//                  break;
//              case 8:
//                  printf("B\n");
//                  break;
//              case 7:
//                  printf("C\n");
//                  break;
//              case 6:
//                  printf("D\n");
//                  break;
//              case 5:
//              case 4:
//              case 3:
//              case 2:
//              case 1:
//              case 0:
//                  printf("E\n");
//                  break;
//              default:
//                  printf("F\n");
//                  break;
//          }
//    }
//    else
//    {
//        printf("F\n");
//    }
//	 return 0;
//}
//
//int main()
//{
//第二种方法
//    int a=0;
//    scanf("%d",&a);
//    if(a>=90&&a<=100)
//    {
//        printf("A");
//    }
//    else if(a>=80&&a<90)
//    {
//        printf("B");
//    }
//       else if(a>=70&&a<80)
//    {
//        printf("C");
//    }
//       else if(a>=60&&a<70)
//    {
//        printf("D");
//    }
//       else if(a<60&&a>=0)
//    {
//        printf("E");
//    }
//       else
//    {
//        printf("F");
//    }
//    return 0;
//}
//int main() 
//{
//	//BoBo出了一个问题给KiKi，转换以下ASCII码为对应字符并输出他们。
//    //73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33
//    char ch[]={73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33};
//    int length=sizeof(ch);
//    int i=0;
//    for(i=0;i<length;i++)
//    {
//        printf("%c\n",ch[i]);
//    }
//    return 0;
//}

//void main()
//{
//从键盘输入三个整数，输出这三个数的最小值（要求使用选择结构实现）。
// int a = 0;
// int c = 0;
// int b = 0;
// int min = 0;
// scanf("%d%d%d",&a,&b,&c);
// if(a>=b)
//	 min=b;
// else
//	 min=a;
// if(c<=min)
//	 min=c;
// printf("%d",min);
//}

//int main()
//{
//求1/2-3/4+5/6-7/8……-99/100
//	int i=1;
//	double s=0.0;
//	int t=1;
//	for(i=1;i<100;i+=2)
//	{
//		s+=1.0*t*i/(i+1);
//		t=-t;
//	}
//	printf("%.4lf",s);
//	return 0;
//}

//void main()
//{
//小李的网店共有20种商品，5月份每种商品的销售数量和对应的单价分别存放在数组a和b中。
//计算这20种商品5月份的销售额，结果存放到数组c中，
//计算并输出5月份商品销售总额（要求用循环实现，结果保留两位小数)。
//	/*销售数量*/
//	int a[20]={53,75,36,18,121,17,18,55,130,66,86,15,19,63,74,12,24,32,45,16};
//	/*对应单价*/
//	double b[20]={12.5,119,18,13.5,65,16,72.5,234,51,45,14.5,18.8,48.8,35.5,28,68,98,120,82,86}; 
//	double c[20];
//	int i=0;
//	double total=0;
//	for(i=0;i<20;i++)
//	{
//		c[i]=a[i]*b[i];
//		total+=c[i];
//	}
//	printf("%.2lf",total);
//}
//求圆的体积
//#define PI 3.14159
//void main()
//{
// double r=0.0;
// double v=0.0;
// scanf("%lf",&r);
// v=4.0/3*PI*r*r*r;
// printf("%lf",v);
//}

//void main()
//{
//求1+1/2-1/3+1/4-1/5+……-1/21
//	double s=1.0;
//	int i=1;
//	int t=1;
//	for(i=1;i<21;i++)
//	{
//		s+=t*1.0/(i+1);
//		t=-t;
//	}
//	printf("%.4lf",s);
//}
void main()
{
	//某110信息中心4月份每天的接警次数和出警次数分别存储在数组a和b中,
	//请统计并输出该月每天平均接警次数和平均出警次数，以及出警率（保留两位小数）。
    //注：出警率=出警总数/接警总数
	/*接警次数*/
	int a[30]={27,33,35,25,26,22,24,25,20,28,21,20,28,27,33,35,25,26,22,24,24,20,26,23,26,19,15,16,21,22};
	/*出警次数*/
	int b[30]={21,28,30,22,25,16,18,20,18,22,18,15,19,20,24,28,17,19,14,16,16,11,20,15,18,12,14,12,19,18};
	double m=0.0;
	int i=0;
	double n=0.0;
	for(i=0;i<30;i++)
	{
		m+=a[i];
		n+=b[i];
	}
	printf("平均每天接警次数：%.2lf\n平均出警次数：%.2lf\n",m/30.0,n/30.0);
	printf("出镜率：%.2lf%%",100*n/m);
}