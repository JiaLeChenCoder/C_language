#define _CRT_SECURE_NO_WARNINGS 1
//typedef struct stu
//{
//	char num[10];//ѧ��
//	char name[10];//����
//	int score[3];//����
//}s1;
//#include<stdio.h>
//int main()
//{
//	s1 s[10];//��10��ѧ��
//	printf("������2��ѧ����ѧ�ţ�������3�ſεĳɼ���\n");
//	int i, j = 0;
//	int max = 0;
//	int sum = 0;
//	for (i = 0; i < 2; i++)//�Ӽ�������10��ѧ������
//	{
//		printf("�������%d��ѧ������\n", i+1);
//		scanf("%s", &s[i].num);
//		scanf("%s", &s[i].name);
//		scanf("%d",&s[i].score[0]);
//		scanf("%d", &s[i].score[1]);
//		scanf("%d", &s[i].score[2]);
//		//��߷ֵ�ѧ����ѧ�š�������3�ſγ̳ɼ���ƽ��������
//		sum = 0;
//		sum = s[i].score[0] + s[i].score[1] + s[i].score[2];
//		if (max < sum)
//		{
//			max = sum;
//			j = i;
//		}
//	}
//	printf("��߷�ѧ����������:\nѧ��:%s\n����:%s\n3�ſγ̳ɼ�:%d %d %d\nƽ������:%lf\n", s[j].num, s[j].name, s[j].score[0], s[j].score[1], s[j].score[2], (double)(max / 3.0));
//	//���3�ſγ���ƽ���ɼ�
//	double sum1 = 0.0, sum2 = 0.0, sum3 = 0.0;
//	for (i = 0; i < 2; i++)
//	{
//		sum1 += s[i].score[0];
//		sum2 += s[i].score[1];
//		sum3 += s[i].score[2];
//	}
//	printf("3�ſγ���ƽ���ɼ��ֱ�Ϊ��%lf %lf %lf", sum1 / 2.0, sum2 / 2.0, sum3 / 2.0);
//	return 0;
//}

#include<stdio.h>
struct student
{
    int num;
    char name[20];
    float score[3];
    float ave;
}stu1[10];

int main()
{
    int i;
    int j = 0;
    float sum1 = 0;
    float sum2 = 0;
    float sum3 = 0;
    printf("������10��ѧ����ѧ�š�������3�ſγ̳ɼ���\n");
    for (i = 0; i < 10; i++)
    {
        printf("��%dλ\n",i+1);
        scanf("%d%s%f%f%f", &stu1[i].num, &stu1[i].name, &stu1[i].score[0], &stu1[i].score[1], &stu1[i].score[2]);
        sum1 += stu1[i].score[0];
        sum2 += stu1[i].score[1];
        sum3 += stu1[i].score[2];
        stu1[i].ave = (stu1[i].score[0] + stu1[i].score[1] + stu1[i].score[2]) / 3.0;
    }
    printf("\n");
    printf("��1�ſγ���ƽ���ɼ��ֱ�Ϊ:%.1f\n",sum1 / 10);
    printf("��2�ſγ���ƽ���ɼ��ֱ�Ϊ:%.1f\n",sum2 / 10);
    printf("��3�ſγ���ƽ���ɼ��ֱ�Ϊ:%.1f\n",sum3 / 10);

    int k = 0;
    for (i = 1; i < 10; i++)
    {
        if (stu1[k].ave < stu1[i].ave) 
            k = i;
    }
    printf("\n������ߵ�ѧ����ϢΪ��\n");
    printf("ѧ�ţ�%d\n", stu1[k].num);
    printf("������%s\n", stu1[k].name);
    printf("�γ�1�ɼ���%.1f\n", stu1[k].score[0]);
    printf("�γ�2�ɼ���%.1f\n", stu1[k].score[1]);
    printf("�γ�3�ɼ���%.1f\n", stu1[k].score[2]);

    return 0;
}
