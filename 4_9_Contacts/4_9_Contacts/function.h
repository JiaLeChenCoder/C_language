#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define N 1000//s�����а���������
#define NAME 20//�����е��ַ�����
#define SEX 10//�Ա���ַ�����
#define TELE 11 //�绰�����е�λ��
#define DRESS 30//��ַ�е��ַ�����

//����һ���ṹ�壬����һ��ѧ������Ϣ
typedef struct People
{
	/*������Ϣ�������Ա����䡢�绰��סַ*/
	char name[NAME];
	char sex[SEX];
	int age;
	char tele[TELE];
	char strdess[DRESS];
}Peo;

//����һ��ͨѶ¼�ṹ�ᣬ�ð���ѧ�����������
typedef struct contact
{
	Peo arrpeo[N];
	int num;
}Conpeo;

//��ʼ����ϵ��
void Initpeo(Conpeo* str);

//�����ϵ����Ϣ
void Addpeople(Conpeo* str);

//��ʾ������ϵ����Ϣ
void Dispalypeo(Conpeo* str);

//ɾ����ϵ����Ϣ
void Delepeo(Conpeo* str);

//�޸�ָ����ϵ����Ϣ
void Xiugaipeo(Conpeo* str);

//���Ҳ���ʾָ����ϵ�˵���Ϣ
void seach_dispalupeo(Conpeo* str);

//���������ϵ��
void Dispempeo(Conpeo* str);

//������������ϵ��
void sort_peo(Conpeo* str);
