#define _CRT_SECURE_NO_WARNINGS 1
//typedef struct stu
//{
//	char num[10];//学号
//	char name[10];//姓名
//	int score[3];//分数
//}s1;
//#include<stdio.h>
//int main()
//{
//	s1 s[10];//有10个学生
//	printf("请输入2名学生的学号，姓名，3门课的成绩：\n");
//	int i, j = 0;
//	int max = 0;
//	int sum = 0;
//	for (i = 0; i < 2; i++)//从键盘输人10个学生数据
//	{
//		printf("请输入第%d个学生数据\n", i+1);
//		scanf("%s", &s[i].num);
//		scanf("%s", &s[i].name);
//		scanf("%d",&s[i].score[0]);
//		scanf("%d", &s[i].score[1]);
//		scanf("%d", &s[i].score[2]);
//		//最高分的学生的学号、姓名、3门课程成绩、平均分数。
//		sum = 0;
//		sum = s[i].score[0] + s[i].score[1] + s[i].score[2];
//		if (max < sum)
//		{
//			max = sum;
//			j = i;
//		}
//	}
//	printf("最高分学生的数据是:\n学号:%s\n姓名:%s\n3门课程成绩:%d %d %d\n平均分数:%lf\n", s[j].num, s[j].name, s[j].score[0], s[j].score[1], s[j].score[2], (double)(max / 3.0));
//	//输出3门课程总平均成绩
//	double sum1 = 0.0, sum2 = 0.0, sum3 = 0.0;
//	for (i = 0; i < 2; i++)
//	{
//		sum1 += s[i].score[0];
//		sum2 += s[i].score[1];
//		sum3 += s[i].score[2];
//	}
//	printf("3门课程总平均成绩分别为：%lf %lf %lf", sum1 / 2.0, sum2 / 2.0, sum3 / 2.0);
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
    printf("请输入10个学生的学号、姓名、3门课程成绩：\n");
    for (i = 0; i < 10; i++)
    {
        printf("第%d位\n",i+1);
        scanf("%d%s%f%f%f", &stu1[i].num, &stu1[i].name, &stu1[i].score[0], &stu1[i].score[1], &stu1[i].score[2]);
        sum1 += stu1[i].score[0];
        sum2 += stu1[i].score[1];
        sum3 += stu1[i].score[2];
        stu1[i].ave = (stu1[i].score[0] + stu1[i].score[1] + stu1[i].score[2]) / 3.0;
    }
    printf("\n");
    printf("第1门课程总平均成绩分别为:%.1f\n",sum1 / 10);
    printf("第2门课程总平均成绩分别为:%.1f\n",sum2 / 10);
    printf("第3门课程总平均成绩分别为:%.1f\n",sum3 / 10);

    int k = 0;
    for (i = 1; i < 10; i++)
    {
        if (stu1[k].ave < stu1[i].ave) 
            k = i;
    }
    printf("\n分数最高的学生信息为：\n");
    printf("学号：%d\n", stu1[k].num);
    printf("姓名：%s\n", stu1[k].name);
    printf("课程1成绩：%.1f\n", stu1[k].score[0]);
    printf("课程2成绩：%.1f\n", stu1[k].score[1]);
    printf("课程3成绩：%.1f\n", stu1[k].score[2]);

    return 0;
}
