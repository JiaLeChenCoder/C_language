#include"function.h"
//打印菜单
menu()
{
	printf("*****************************************\n");
	printf("********   1.添加联系人  2.删除联系人  *******\n");
	printf("********   3.查找联系人  4.修改联系人  *******\n");
	printf("********   5.显示联系人  6.清空联系人  *******\n");
	printf("********   7.排序联系人  0.退出           *******\n");
	printf("*****************************************\n");
}
enum  Option
{
	EXIT,
	ADD,
	DELE,
	SEACH,
	XIUGAI,
	DISPALY,
	DISPEM,
	SORT,
};
int main()
{
	int input;//功能选择
	Conpeo conpeo;//创建通讯录变量
	Initpeo(&conpeo);

	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			printf("操作完成，请退出！");
			break;
		case ADD:
			Addpeople(&conpeo);
			break;
		case DELE:
			Delepeo(&conpeo);
			break;
		case SEACH:
			seach_dispalupeo(&conpeo);
			break;
		case XIUGAI:
			Xiugaipeo(&conpeo);
			break;
		case DISPALY:
			Dispalypeo(&conpeo);
			break;
		case DISPEM:
			Dispempeo(&conpeo);
			break;
		case SORT:
			sort_peo(&conpeo);
			break;
		default:
			printf("选择错误，请重新选择！");
			break;
		}
	} while (input);
	return 0;
}