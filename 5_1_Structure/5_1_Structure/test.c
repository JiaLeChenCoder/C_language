#define _CRT_SECURE_NO_WARNINGS 1
struct stu
{
	char num[10];//ѧ��
	char name[10];//����
	int score[3];//����
};
#include<stdio.h>
int main()
{
	struct stu s[10];//��10��ѧ��
	printf("������10��ѧ����ѧ�ţ�������3�ſεĳɼ���\n");
	int i, j = 0;
	int max = 0;
	int sum = 0;
	for (i = 0; i < 10; i++)//�Ӽ�������10��ѧ������
	{
		scanf("%s,%s,%d,%d,%d", s[i].num, s[i].name, &s[i].score[0], &s[i].score[1], &s[i].score[2]);
		//��߷ֵ�ѧ����ѧ�š�������3�ſγ̳ɼ���ƽ��������
		sum = 0;
		sum = s[i].score[0] + s[i].score[1] + s[i].score[2];
		if (max < sum)
		{
			max = sum;
			j = i;
		}
	}
	printf("��߷�ѧ����������:ѧ��:%s\n����:%s\n3�ſγ̳ɼ�:%d %d %d\nƽ������:%lf\n", s[j].num, s[j].name, s[j].score[0], s[j].score[1], s[j].score[2], (double)(sum / 3.0));
	//���3�ſγ���ƽ���ɼ�
	double sum1 = 0, sum2 = 0, sum3 = 0;
	for (i = 0; i < 10; i++)
	{
		sum1 += s[i].score[0];
		sum2 += s[i].score[1];
		sum3 += s[i].score[2];
	}
	printf("3�ſγ���ƽ���ɼ��ֱ�Ϊ��%lf %lf %lf", sum1 / 10.0, sum2 / 10.0, sum3 / 10.0);
	return 0;
}