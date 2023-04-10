#define _CRT_SECURE_NO_WARNINGS 1
#include"function.h"
//�������ܵ�ʵ��

//��ʼ������̬                ��
//void Initpeo(Conpeo* str)
//{
//	str->num = 0;//����Ϊ0
//	memset(str->arrpeo, 0, sizeof(str->arrpeo));
//}
void Initpeo(Conpeo* str)
{
     str->arrpeo = (Peo*)malloc(sizeof(Peo)*DEFAULT_SZ);
	if (str->arrpeo == NULL)
	{
		printf("ͨѶ¼��ʼ��ʧ��:%s\n",strerror(errno));
		return;
	}
	str->num= 0;
	str->capacity = DEFAULT_SZ;
}
void Destroypeo(Conpeo* str)
{
	free(str->arrpeo);
	str->arrpeo = NULL;
	str->capacity = 0;
	str->num = 0;
	printf("�ͷ��ڴ�\n");
}

//�����ϵ����Ϣ(��̬)
//void Addpeople(Conpeo* str)
//{
//	//��ϵ������
//	if (str->num == N)
//	{
//		printf("ͨѶ¼��������������");
//		return;
//	}
//	//��ϵ��δ��
//	else
//	{
//		printf("��������ϵ��������");
//		scanf("%s", str->arrpeo[str->num].name);
//		printf("��������ϵ���Ա�");
//		scanf("%s", str->arrpeo[str->num].sex);
//		printf("��������ϵ�����䣺");
//		scanf("%d", &(str->arrpeo[str->num].age));
//		printf("��������ϵ�˵绰��");
//		scanf("%s", str->arrpeo[str->num].tele);
//		printf("��������ϵ�˵�ַ��");
//		scanf("%s", str->arrpeo[str->num].strdess);
//	}
//	str->num++;
//}

//��̬
void CheckCapacity(Conpeo* str)
{
	if (str->num== str->capacity)
	{
	 Peo* ptr=(Peo*)realloc(str->arrpeo, (str->capacity + INC_SZ) * sizeof(Peo));
	if (ptr == NULL)
	{
		printf("CheckCapacity: % s\n", strerror(errno));
		return;
	}
	else
	{
		str->arrpeo = ptr;
		str->capacity += INC_SZ;
		printf("���ݳɹ�����ǰ������%d\n", str->capacity);
	}
	}
}
void Addpeople(Conpeo* str)
{
	CheckCapacity(str);

		printf("��������ϵ��������");
		scanf("%s", str->arrpeo[str->num].name);
		printf("��������ϵ���Ա�");
		scanf("%s", str->arrpeo[str->num].sex);
		printf("��������ϵ�����䣺");
		scanf("%d", &(str->arrpeo[str->num].age));
		printf("��������ϵ�˵绰��");
		scanf("%s", str->arrpeo[str->num].tele);
		printf("��������ϵ�˵�ַ��");
		scanf("%s", str->arrpeo[str->num].strdess);
	str->num++;
}

//��ʾ��ϵ����Ϣ
void Dispalypeo(Conpeo* str)
{
	//�б�Ϊ��ʱ
	if (str->num == 0)
	{
		printf("�б�Ϊ�գ�\n");
	}
	else
	{
		printf("%-20s %-5s %-5s %-15s %-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
		for (int i = 0; i < str->num; i++)
		{
			printf("%-20s %-5s %-5d %-15s %-20s\n", str->arrpeo[i].name, str->arrpeo[i].sex, str->arrpeo[i].age, str->arrpeo[i].tele, str->arrpeo[i].strdess);
		}
	}
}

//����ָ����ϵ��
int Seachpeo(Conpeo* str, char name[])
{

	//û����ϵ��
	if (str->num == 0)
	{
		printf("�б�Ϊ��\n");
		return -1;
	}
	else
	{
		for (int i = 0; i < str->num; i++)
		{
			//�ַ����ıȽ�
			if (strcmp(str->arrpeo[i].name, name) == 0)
			{
				//��������ҵ���ϵ��
				return i;
			}
		}
		return -1;
	}
}

//��ʾָ����ϵ�˵���Ϣ
void seach_dispalupeo(Conpeo* str)
{
	char name[NAME] = { 0 };
	printf("��������Ҫ���ҵ���ϵ��������");
	scanf("%s", name);
	if (str->num == 0)
	{
		printf("��ϵ���б��ǿյġ�\n");
	}
	int pos = Seachpeo(str, name);
	if (pos == -1)
	{
		printf("����ϵ�˲����ڣ�\n");
	}
	else
	{
		printf("���ҵ���ϵ�ˣ���Ϣ���£�\n");
		printf("%-20s %-5s %-5s %-15s %-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
		printf("%-20s %-5s %-5d %-15s %-20s\n", str->arrpeo[pos].name, str->arrpeo[pos].sex, str->arrpeo[pos].age, str->arrpeo[pos].tele, str->arrpeo[pos].strdess);
	}
}

//ɾ����ϵ����Ϣ
void Delepeo(Conpeo* str)
{
	//û����ϵ��
	if (str->num == 0)
	{
		printf("��ϵ���б�Ϊ�գ��޷�ɾ����\n");
		return;
	}
	//����ϵ��
	else
	{
		printf("������Ҫɾ���˵�������\n");
		char name[NAME] = { 0 };
		scanf("%s", name);
		if (Seachpeo(str, name) == -1)
		{
			printf("����ϵ�˲�����\n");
		}
		else
		{
			for (int i = Seachpeo(str, name); i < str->num; i++)
			{
				//ɾ���ĸ���ϵ�ˣ��������ң������������ǰ��
				str->arrpeo[i] = str->arrpeo[i + 1];
			}
			printf("����ϵ����ɾ��\n");
			str->num--;
		}
	}
}

//�޸�ָ����ϵ����Ϣ
void Xiugaipeo(Conpeo* str)
{

	//û����ϵ��
	if (str->num == 0)
	{
		printf("û����ϵ��\n");
		return;
	}
	else
	{
		char name[NAME];
		printf("������Ҫ�޸ĵ���ϵ������\n");
		scanf("%s", name);
		int pos = Seachpeo(str, name);
		if (pos == -1)
		{
			printf("����ϵ�˲�����\n");
			return;
		}
		//�޸���ϵ�˵���Ϣ
		printf("�������޸ĺ����ϵ����Ϣ:\n");
		printf("������������\n");
		scanf("%s", str->arrpeo[pos].name);
		printf("�������Ա�\n");
		scanf("%s", str->arrpeo[pos].sex);
		printf("���������䣺\n");
		scanf("%d", &str->arrpeo[pos].age);
		printf("������绰��\n");
		scanf("%s", str->arrpeo[pos].tele);
		printf("�������ַ��\n");
		scanf("%s", str->arrpeo[pos].strdess);
		printf("�޸ĳɹ���\n");
	}
}

//���������ϵ��
void Dispempeo(Conpeo* str)
{
	str->num = 0;
	printf("�Ѿ������ϵ���б����ڸ��б�Ϊ�գ�\n");
}

//������������ϵ��
void sort_peo(Conpeo* str)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < str->num; i++)
	{
		for (j = 0; j < str->num - 1 - i; j++)
		{
			if (strcmp(str->arrpeo[j].name, str->arrpeo[j + 1].name) > 0)
			{
				Peo tem = str->arrpeo[j];
				str->arrpeo[j] = str->arrpeo[j + 1];
				str->arrpeo[j + 1] = tem;
			}
		}
	}
	printf("����ɹ���\n");
}
