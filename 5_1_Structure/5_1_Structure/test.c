#define _CRT_SECURE_NO_WARNINGS 1
struct stu
{
	char num[10];//学号
	char name[10];//姓名
	int score[3];//分数
};
#include<stdio.h>
int main()
{
	struct stu s[10];//有10个学生
	printf("请输入10名学生的学号，姓名，3门课的成绩：\n");
	int i, j = 0;
	int max = 0;
	int sum = 0;
	for (i = 0; i < 10; i++)//从键盘输人10个学生数据
	{
		scanf("%s,%s,%d,%d,%d", s[i].num, s[i].name, &s[i].score[0], &s[i].score[1], &s[i].score[2]);
		//最高分的学生的学号、姓名、3门课程成绩、平均分数。
		sum = 0;
		sum = s[i].score[0] + s[i].score[1] + s[i].score[2];
		if (max < sum)
		{
			max = sum;
			j = i;
		}
	}
	printf("最高分学生的数据是:学号:%s\n姓名:%s\n3门课程成绩:%d %d %d\n平均分数:%lf\n", s[j].num, s[j].name, s[j].score[0], s[j].score[1], s[j].score[2], (double)(sum / 3.0));
	//输出3门课程总平均成绩
	double sum1 = 0, sum2 = 0, sum3 = 0;
	for (i = 0; i < 10; i++)
	{
		sum1 += s[i].score[0];
		sum2 += s[i].score[1];
		sum3 += s[i].score[2];
	}
	printf("3门课程总平均成绩分别为：%lf %lf %lf", sum1 / 10.0, sum2 / 10.0, sum3 / 10.0);
	return 0;
}