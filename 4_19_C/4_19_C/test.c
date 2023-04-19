#define _CRT_SECURE_NO_WARNINGS  1
//#include"SList.h"
//void Test1()
//{
//	SLTNode* plist = NULL;
//	SLTPushFront(&plist, 1);
//	SLTPushFront(&plist, 2);
//	SLTPushFront(&plist, 3);
//	SLTPushFront(&plist, 4);
//	SLTPushFront(&plist, 5);
//
//	SLTPrint(plist);
//}
//int main()
//{
//	Test1();
//	return 0;
//}

#include<stdio.h>
#include<string.h>
int main()
{
    int i = 0;
    char arr1[100] = { 0 };
    char arr2[100] = { 0 };
    char ch = '0';
    /* gets(arr1);
     gets(arr2);*/
    while (ch != '\n')
    {
        scanf("%c", &ch);
        arr1[i++] = ch;
    }
    arr1[i] = '\0';
    ch = '0';
    i = 0;
    while (ch != '\n')
    {
        scanf("%c", &ch);
        arr2[i++] = ch;
    }
    arr2[i] = '\0';
    i = 0;
    while (arr1[i])
    {
        if (strchr(arr2, arr1[i]) == NULL)
        {
            printf("%c", arr1[i]);
        }
        i++;
    }
    return 0;
}
