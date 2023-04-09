#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define N 1000//s数组中包含的人数
#define NAME 20//名字中的字符个数
#define SEX 10//性别的字符个数
#define TELE 11 //电话号码中的位数
#define DRESS 30//地址中的字符个数

//创建一个结构体，包含一个学生的信息
typedef struct People
{
	/*个人信息姓名、性别、年龄、电话、住址*/
	char name[NAME];
	char sex[SEX];
	int age;
	char tele[TELE];
	char strdess[DRESS];
}Peo;

//创建一个通讯录结构提，用包含学生数组和人数
typedef struct contact
{
	Peo arrpeo[N];
	int num;
}Conpeo;

//初始化联系人
void Initpeo(Conpeo* str);

//添加联系人信息
void Addpeople(Conpeo* str);

//显示所有联系人信息
void Dispalypeo(Conpeo* str);

//删除联系人信息
void Delepeo(Conpeo* str);

//修改指定联系人信息
void Xiugaipeo(Conpeo* str);

//查找并显示指定联系人的信息
void seach_dispalupeo(Conpeo* str);

//清空所有联系人
void Dispempeo(Conpeo* str);

//按姓名排序联系人
void sort_peo(Conpeo* str);
