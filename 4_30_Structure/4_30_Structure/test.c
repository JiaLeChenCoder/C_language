#define _CRT_SECURE_NO_WARNINGS  1
//ʵ��10 �ṹ��
struct student
{
	long num;//ѧ��
	char name[30];//����
	char gender;//�Ա�
	float score[3];//����
}s1;

#include<stdio.h>
int main()
{
	int i = 0;
	printf("����������\n");
	gets(s1.name);
	printf("������ѧ��,�Ա�\n");
	scanf("%ld %c", &s1.num, &s1.gender);
	printf("������3�Ʒ���\n");
	for(i = 1;i<=3; i++)
	{
		scanf("%f",s1.score[i]);
	}
	printf("����:%s\nƽ���ɼ�:%lf\n",s1.name,(s1.score[0] + s1.score[1] + s1.score[2])/3);
	return 0;
}