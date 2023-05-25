#include<stdbool.h>
char matching(char a) {
    if (a == '}') return '{';
    if (a == ']') return '[';
    if (a == ')') return '(';
    return 0;
}

bool isValid(char* s) {
    int n = strlen(s);
    if (n % 2 == 1) {
        return false;
    }
    int str[n+1], top = 0;
    for (int i = 0; i < n; i++) {
        char ch = matching(s[i]);
        if (ch) {
            if (top == 0 || str[top - 1] != ch) {
                return false;
            }
            top--;
        }
        else {
            str[top++] = s[i];
        }
    }
    return top == 0;
}
