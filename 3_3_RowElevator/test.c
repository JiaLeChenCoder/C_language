#include <stdio.h>
int main() 
{
	/*小乐乐学校教学楼的电梯前排了很多人，他的前面有n个人在等电梯。
	电梯每次可以乘坐12人，每次上下需要的时间为4分钟（上需要2分钟，下需要2分钟）。
    请帮助小乐乐计算还需要多少分钟才能乘电梯到达楼上。（假设最初电梯在1层）*/
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
//	//获得4个最大数，请帮他编程找到最大的数
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
	//另一种解法
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
//	//输入10个整数，分别统计输出正数、负数的个数。
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
//	//输入n个成绩，换行输出n个成绩中最高分数和最低分数的差。
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
//    printf("分差是%d",max-min);
//    return 0;
//}
