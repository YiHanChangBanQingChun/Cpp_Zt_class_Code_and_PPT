/*
2、编写程序，比较两个字符串的大小，
不允许使用字符串函数。输入分2行，
每一行均为字符串（不包含空格）。
如果第一个字符串大于第二个字符串，
则输出1；如果两个字符串大小相等，则输出0；
如果第一个字符串小于第二个字符串，则输出-1。

#include <iostream>
using namespace std;

int compare_strings(const char* str1, const char* str2) {
    // 比较两个字符串的大小,指的是两两比较，
    // 当有一组较大时，即认为该组所在的字符串大
    while (*str1 && (*str1 == *str2)) { 
        //str1和str2同时不为'\0'，且两个字符相等时，继续比较下一个字符
        cout << "str1: " << *str1 << " str2: " << *str2 << endl;
        str1++;
        str2++;
    } // 当两个字符串的字符不相等时，返回两个字符的差值
    return (*(unsigned char*)str1 - *(unsigned char*)str2);
}

void print_comparison_result(int result) {
    if (result > 0)
        cout << "1" << endl; // 第一个字符串大于第二个字符串
    else if (result < 0)
        cout << "-1" << endl; // 第一个字符串小于第二个字符串
    else
        cout << "0" << endl; // 两个字符串相等
}

int main() {
    char str1[100], str2[100];
    cout << "请输入第一个字符串：";
    cin >> str1;
    cout << "请输入第二个字符串：";
    cin >> str2;

    int result = compare_strings(str1, str2);
    print_comparison_result(result);

    return 0;
}*/