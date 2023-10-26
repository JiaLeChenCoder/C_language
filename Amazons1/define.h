// define.h 

// 为了在使用的时候能避免数据表示出现差错，采用宏定义相关确定的参数值
// ////////////////////////////////////////////////////////////////////


#ifndef define_h_
#define define_h_

#define LEFT 15                // 棋盘相对对话框左上角x的坐标
#define TOP  15                // 棋盘相对对话框左上角y的坐标

// 棋盘方格
#define BOARDX 10              // 棋盘x方向的方格数
#define BOARDY 10              // 棋盘y方向的方格数

#define GRIDSIZE 40            // 方格的大小，并作为边框的大小 （像素）

// 方格的状态
#define EMPTY 0                // 为空
#define WHITE 1                // 白棋
#define BLACK 2                // 黑棋
#define ARROW 3                // 障碍物
#define BIAN -2
// 走棋基本操作（操作流程）
#define CATCHWHT 1             // 捕获白棋
#define WHTGO 2                // 白棋走
#define WHTTHROWARROW 3        // 白棋抛出障碍物
#define CATCHBK 4              // 捕获黑棋
#define BKGO 5                 // 黑棋走
#define BKTHROWARROW 6         // 黑棋抛出障碍物
const int queen_direction[8] = {-13, -12, -11, -1, 1, 11, 12, 13};

#endif // define_h_