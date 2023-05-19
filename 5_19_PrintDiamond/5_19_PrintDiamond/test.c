#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>

void printSpaces(int n) {
    for (int i = 1; i <= n; i++) {
        printf(" ");
    }
}

void printStars(int n) {
    for (int i = 1; i <= n; i++) {
        printf("* ");
    }
}

int main() {
    int n;
    printf("请输入菱形的边长：\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printSpaces(n - i);
        printStars(i);
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--) {
        printSpaces(n - i);
        printStars(i);
        printf("\n");
    }
    return 0;
}