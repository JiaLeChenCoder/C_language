#include<stdio.h>
//int main()
//{
//	typedef struct {
//		int a;
//		char b;
//		short c;
//		short d;
//	}AA_t;
//	printf("%d", sizeof(AA_t));
//}

//#pragma pack(4)/*编译选项，表示4字节对齐 平台：VS2013。语言：C语言*/
////假设long 是4个字节
//int main(int argc, char* argv[])
//{
//    struct tagTest1
//    {
//        short a;
//        char d;
//        long b;
//        long c;
//    };
//    struct tagTest2
//    {
//        long b;
//        short c;
//        char d;
//        long a;
//    };
//    struct tagTest3
//    {
//        short c;
//        long b;
//        char d;
//        long a;
//    };
//    struct tagTest1 stT1;
//    struct tagTest2 stT2;
//    struct tagTest3 stT3;
//
//    printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
//    return 0;
//}
//#pragma pack()

//enum ENUM_A
//{
//	X1,
//	Y1,
//	Z1 = 255,
//	A1,
//	B1,
//};
//enum ENUM_A enumA = Y1;
//enum ENUM_A enumB = B1;
//int main()
//{
//	printf("%d %d\n", enumA, enumB);
//}

//struct A
//{
//	int a;
//	short b;
//	int c;
//	char d;
//};
//struct B
//{
//	int a;
//	short b;
//	char c;
//	int d;
//};
//int main()
//{
//	printf("%d %d", sizeof(struct B), sizeof(struct A));
//	return 0;
//}