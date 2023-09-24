#include <stdio.h>
double fun(double h)
{
    long t;
    t = (h * 1000 + 5) / 10;      /*双精度数h乘以1000后再加5，相当于对h中的第三位小数进行四舍五入
                          除以10后将其赋给一个长整型数时就把第三位小数后的数全部截去*/
    return (double)t / 100;  /*除以100，保留2位小数*/
}
main()
{
    double  a; void NONO();
    printf("Enter  a:  "); scanf("%lf", &a);
    printf("The original data is :   ");
    printf("%f \n\n", a);
    printf("The result :  %f\n", fun(a));
    NONO();
}

void NONO()
{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，
    输出数据，关闭文件。 */
    int i;
    double a;
    FILE* rf, * wf;

    rf = fopen("in.dat", "r");
    wf = fopen("out.dat", "w");
    for (i = 0; i < 20; i++) {
        fscanf(rf, "%lf", &a);
        fprintf(wf, "%f\n", fun(a));
    }
    fclose(rf);
    fclose(wf);
}
