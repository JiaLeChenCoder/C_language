#include <stdio.h>
#include <stdlib.h>
#define   N   8
struct  slist
{
    double   s;
    struct slist* next;
};
typedef  struct slist  STREC;
double  fun(STREC* h)
{
    double max = 0.0;
    max = h->s;
    while (h)
    {
        if (max < h->s)
        {
            max = h->s;
        }
        h = h->next;
    }
    return max;
}

STREC* creat(double* s)
{
    STREC* h, * p, * q;   int  i = 0;
    h = p = (STREC*)malloc(sizeof(STREC)); p->s = 0;
    while (i < N)
    {
        q = (STREC*)malloc(sizeof(STREC));
        q->s = s[i]; i++; p->next = q; p = q;
    }
    p->next = 0;
    return  h;
}
void outlist(STREC* h)
{
    STREC* p;
    p = h->next;   printf("head");
    do
    {
        printf("->%2.0f", p->s); p = p->next;
    } while (p != 0);
    printf("\n\n");
}
void main()
{
    double  s[N] = { 85,76,69,85,91,72,64,87 }, max; void NONO();
    STREC* h;
    h = creat(s);   outlist(h);
    max = fun(h);
    printf("max=%6.1f\n", max);
    NONO();
}
void NONO()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
    FILE* in, * out;
    int i, j; double  s[N], max;
    STREC* h;
    in = fopen("in.dat", "r");
    out = fopen("out.dat", "w");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < N; j++) fscanf(in, "%lf,", &s[j]);
        h = creat(s);
        max = fun(h);
        fprintf(out, "%6.1lf\n", max);
    }
    fclose(in);
    fclose(out);
}

