#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	FILE* pFile;
	//���ļ�
	pFile = fopen("myfile.txt", "w");
	//�ļ�����
	if (pFile == NULL)
	{
		perror("fopen");
	}
	//�ر��ļ�
	fclose(pFile);
	free(pFile); 
	pFile = NULL;
	return 0;
}