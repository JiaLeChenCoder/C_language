#include <stdio.h>
double fun(double h)
{
    long t;
    t = (h * 1000 + 5) / 10;      /*˫������h����1000���ټ�5���൱�ڶ�h�еĵ���λС��������������
                          ����10���丳��һ����������ʱ�Ͱѵ���λС�������ȫ����ȥ*/
    return (double)t / 100;  /*����100������2λС��*/
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
{/* ���ڴ˺����ڴ��ļ�������������ݣ����� fun ������
    ������ݣ��ر��ļ��� */
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
