#include"function.h"
//��ӡ�˵�
menu()
{
	printf("*****************************************\n");
	printf("********   1.�����ϵ��  2.ɾ����ϵ��  *******\n");
	printf("********   3.������ϵ��  4.�޸���ϵ��  *******\n");
	printf("********   5.��ʾ��ϵ��  6.�����ϵ��  *******\n");
	printf("********   7.������ϵ��  0.�˳�           *******\n");
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
	int input;//����ѡ��
	Conpeo conpeo;//����ͨѶ¼����
	Initpeo(&conpeo);

	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			printf("������ɣ����˳���");
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
			printf("ѡ�����������ѡ��");
			break;
		}
	} while (input);
	return 0;
}