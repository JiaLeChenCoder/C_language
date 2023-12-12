#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a = 0, i = 0, j = 0;
    bool b = true;
    int count = 0;
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        if ((a % i) == 0)
        {
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    b = false;
                    break;
                }

           }
            if (b == true)
               count++;
       }
   }
    printf("%d", count);
    return 0;
}

