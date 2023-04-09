#define _CRT_SECURE_NO_WARNINGS 1
#include"function.h"
/*函数功能的实现*/

//初始化
void Initpeo(Conpeo* str)
{
	str->num = 0;//个数为0
	//对结构体内的数据进行初始化时，用memset函数，因为数组的大小是不知道的
	memset(str->arrpeo, 0, sizeof(str->arrpeo));
}

//添加联系人信息
void Addpeople(Conpeo* str)
{
	//联系人已满
	if (str->num == N)
	{
		printf("通讯录已满，不能增加");
		return;
	}
	//联系人未满
	else
	{
		printf("请输入联系人姓名：");
		scanf("%s", str->arrpeo[str->num].name);
		printf("请输入联系人性别：");
		scanf("%s", str->arrpeo[str->num].sex);
		printf("请输入联系人年龄：");
		scanf("%d", &(str->arrpeo[str->num].age));
		printf("请输入联系人电话：");
		scanf("%s", str->arrpeo[str->num].tele);
		printf("请输入联系人地址：");
		scanf("%s", str->arrpeo[str->num].strdess);
	}
	str->num++;
}

//显示联系人信息
void Dispalypeo(Conpeo* str)
{
	//列表为空时
	if (str->num == 0)
	{
		printf("列表为空，没有联系人！\n");
	}
	else
	{
		printf("%-20s %-5s %-5s %-12s %-20s\n", "姓名", "性别", "年龄", "电话", "地址");
		for (int i = 0; i < str->num; i++)
		{
			printf("%-20s %-5s %-5d %-12s %-20s\n", str->arrpeo[i].name, str->arrpeo[i].sex, str->arrpeo[i].age, str->arrpeo[i].tele, str->arrpeo[i].strdess);
		}
	}
}

//查找指定联系人
int Seachpeo(Conpeo* str, char name[])
{

	//没有联系人
	if (str->num == 0)
	{
		printf("列表为空，没有联系人\n");
		return -1;
	}
	else
	{
		for (int i = 0; i < str->num; i++)
		{
			//字符串的比较
			if (strcmp(str->arrpeo[i].name, name) == 0)
			{
				//输出所查找的联系人，所在下标
				return i;
			}
		}
		return -1;
	}
}

//查找并显示指定联系人的信息
void seach_dispalupeo(Conpeo* str)
{
	char name[NAME] = { 0 };
	printf("请输入需要查找的联系人姓名：");
	scanf("%s", name);
	if (str->num == 0)
	{
		printf("联系人列表是空的。\n");
	}
	int pos = Seachpeo(str, name);
	if (pos == -1)
	{
		printf("该联系人不存在！\n");
	}
	else
	{
		printf("查找的联系人，信息如下：\n");
		printf("%-20s %-5s %-5s %-12s %-20s\n", "姓名", "性别", "年龄", "电话", "地址");
		printf("%-20s %-5s %-5d %-12s %-20s\n", str->arrpeo[pos].name, str->arrpeo[pos].sex, str->arrpeo[pos].age, str->arrpeo[pos].tele, str->arrpeo[pos].strdess);
	}
}

//删除联系人信息
void Delepeo(Conpeo* str)
{
	//没有联系人
	if (str->num == 0)
	{
		printf("联系人列表为空，无法删除。\n");
		return;
	}
	//有联系人
	else
	{
		printf("请输入要删除人的姓名。\n");
		char name[NAME] = { 0 };
		scanf("%s", name);
		if (Seachpeo(str, name) == -1)
		{
			printf("该联系人不存在\n");
		}
		else
		{
			for (int i = Seachpeo(str, name); i < str->num; i++)
			{
				//删除的该联系人，从左向右，后面的数据往前移
				str->arrpeo[i] = str->arrpeo[i + 1];
			}
			printf("该联系人已删除\n");
			str->num--;
		}
	}
}

//修改指定联系人信息
void Xiugaipeo(Conpeo* str)
{

	//没有联系人
	if (str->num == 0)
	{
		printf("没有联系人\n");
		return;
	}
	else
	{
		char name[NAME];
		printf("请输入要修改的联系人姓名\n");
		scanf("%s", name);
		int pos = Seachpeo(str, name);
		if (pos == -1)
		{
			printf("该联系人不存在\n");
			return;
		}
		//修改联系人的信息
		printf("请输入修改后的联系人信息:\n");
		printf("请输入姓名：\n");
		scanf("%s", str->arrpeo[pos].name);
		printf("请输入性别：\n");
		scanf("%s", str->arrpeo[pos].sex);
		printf("请输入年龄：\n");
		scanf("%d", &str->arrpeo[pos].age);
		printf("请输入电话：\n");
		scanf("%s", str->arrpeo[pos].tele);
		printf("请输入地址：\n");
		scanf("%s", str->arrpeo[pos].strdess);
		printf("修改成功！\n");
	}
}

//清空所有联系人
void Dispempeo(Conpeo* str)
{
	str->num = 0;
	printf("已经清空联系人列表，现在该列表为空！\n");
}

//按姓名排序联系人
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
	printf("排序成功！\n");
}
