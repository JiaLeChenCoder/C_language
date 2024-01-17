#include<stdio.h>
void A(int* a)
{
	a[0] = 1;
	//当我们把数组名传递给子函数后，在子函数内就可以访问数组的某个元素，同时可以进行修改
}
int main()
{
	/*int j = 1;
	j || printf("hello warld\n");*/
	//由于j等于1，为真，逻辑或的短路运算，当前一个表达式为真时，后面的表达式不会得到运行，
	//因此printf(“hello world\n”);不会得到运行，所以看不到

	//while (j < 10);//加了；后是死循环
	//for (;;)//可省

		//continue;
	//用法这是continue的作用，需要记住，在while循环中使用continue要小心，
	// continue之前要有让while循环判断趋近于假的操作，避免死循环


	/*int mark[100] = { 3 };
	mark[10] = 3;*/


	//int a[5] = { 2,2,2,2 };
	//A(a);
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d", a[i]);
	//}

	//char str[10] = {'i','a','m','h','a','p','y'};
	//char c[10]="Iamhappy"这种是最常用的
	/*即把10个字符分别赋给str[0]到str[9]10个元素
		如果花括号中提供的字符个数大于数组长度，
		则按语法错误处理；若小于数组长度，则只将这些字符数组中前面那些元素，
		其余的元素自动定为空字符（即 ‘\0’ )。*/

		//char c[5] = { 'a','x','s','a', '\0'};
		////char c[5]我们只能放4个字符，第五个字符需要放置结束符’\0’，
		//// 否则 printf("%s\n",c);输出会造成乱码
		//char b[5] = "asdfg";

		//char c[10]; 
		//int i=0;
		////scanf("%s", c);//scanf("%s",c);会忽略空格和\n，因此无法读取到空格和\n
		//while (i < 10)
		//{
		//	scanf(" %c", &c[i]);//记得加空格
		//	i++;
		//}
		//while(EOF != scanf("%c", &c[i]))
		////要注意的是：在终端(黑框)中手动输入时，系统并不知道什么时候到达了所谓的“文件末尾”，
		//// 因此需要用<Ctrl + z>组合键然后按 Enter 键的方式来告诉系统已经到了EOF，这样系统才会结束while.

		//printf("%s",c);



	char q[] = "asasas";
	gets(q);
	//如果要一次读一行，同时需要把空格读到字符数组中，那么就需要用gets
	printf("%s\n", q);
	puts(q);//如果输出字符串，使用puts更加方便，注意puts只能用于输出字符串，不能输出其他类型
	printf("%d\n", strlen(q));//6
	printf("%d\n", sizeof(q));//7
	return 0;
}
