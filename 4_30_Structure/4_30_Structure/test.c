#define _CRT_SECURE_NO_WARNINGS  1
//实验10 结构体
struct student
{
	long num;//学号
	char name[30];//姓名
	char gender;//性别
	float score[3];//分数
}s1;

#include<stdio.h>
int main()
{
	int i = 0;
	printf("请输入姓名\n");
	gets(s1.name);
	printf("请输入学号,性别\n");
	scanf("%ld %c", &s1.num, &s1.gender);
	printf("请输入3科分数\n");
	for(i = 1;i<=3; i++)
	{
		scanf("%f",s1.score[i]);
	}
	printf("姓名:%s\n平均成绩:%lf\n",s1.name,(s1.score[0] + s1.score[1] + s1.score[2])/3);
	return 0;
}