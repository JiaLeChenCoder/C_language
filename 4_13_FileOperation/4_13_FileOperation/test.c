#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	FILE* pFile;
	//打开文件
	pFile = fopen("myfile.txt", "w");
	//文件操作
	if (pFile == NULL)
	{
		perror("fopen");
	}
	//关闭文件
	fclose(pFile);
	free(pFile); 
	pFile = NULL;
	return 0;
}