#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

#define N 3//数组中包含的人数
#define NAME 20//名字中的字符个数
#define SEX 10//性别的字符个数
#define TELE 20 //电话号码中的位数
#define DRESS 30//地址中的字符个数
#define DEFAULT_SZ 3//默认时候为3个
#define INC_SZ 2//扩容的个数

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
//静态的版本
//typedef struct contact
//{
//	Peo arrpeo[N];
//	int num;
//}Conpeo;
// 
//动态的版本
//不够的话，每次增加两个人的信息
typedef struct contact
{
	Peo* arrpeo;//data指向了存放数据的空间
	int num;//存放通讯录的有效信息个数
	int capacity;//记录通讯录的最大容量
}Conpeo;
//销毁通讯录
void Destroypeo(Conpeo* str);
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
