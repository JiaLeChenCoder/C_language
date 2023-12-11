#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>
//#include<stdbool.h>
//int main()
//{
//    int a = 0, i = 0, j = 0;
//    bool b = true;
//    int count = 0;
//    scanf("%d", &a);
//    for (i = 1; i <= a; i++)
//    {
//        if ((a % i) == 0)
//        {
//            for (j = 2; j < i; j++)
//            {
//                if (i % j == 0)
//                {
//                    b = false;
//                    break;
//                }
//
//            }
//            if (b == true)
//                count++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}

#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main()
{
    int a = 0, b = 0, i = 0, count = 0, j = 0;
    bool x = true;
    scanf("%d %d", &a, &b);
    int m = pow(a,b);
   // printf("%d", m);
        for (i = 2; i < m; i++)
        {

            if (m % i == 0)
            {
                x = false;
            }

            if (x == true)
                count++;
        }
        printf("%d", count);
    return 0;
}