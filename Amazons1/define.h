// define.h 

// Ϊ����ʹ�õ�ʱ���ܱ������ݱ�ʾ���ֲ�����ú궨�����ȷ���Ĳ���ֵ
// ////////////////////////////////////////////////////////////////////


#ifndef define_h_
#define define_h_

#define LEFT 15                // ������ԶԻ������Ͻ�x������
#define TOP  15                // ������ԶԻ������Ͻ�y������

// ���̷���
#define BOARDX 10              // ����x����ķ�����
#define BOARDY 10              // ����y����ķ�����

#define GRIDSIZE 40            // ����Ĵ�С������Ϊ�߿�Ĵ�С �����أ�

// �����״̬
#define EMPTY 0                // Ϊ��
#define WHITE 1                // ����
#define BLACK 2                // ����
#define ARROW 3                // �ϰ���
#define BIAN -2
// ��������������������̣�
#define CATCHWHT 1             // �������
#define WHTGO 2                // ������
#define WHTTHROWARROW 3        // �����׳��ϰ���
#define CATCHBK 4              // �������
#define BKGO 5                 // ������
#define BKTHROWARROW 6         // �����׳��ϰ���
const int queen_direction[8] = {-13, -12, -11, -1, 1, 11, 12, 13};

#endif // define_h_