/*
5、声明字符型指针p和q，
分别指向"forward"字符串和"fortune"字符串，
编写程序利用指针找出两个字符串相同位置上
的相同字符，并按顺序输出。

#include <iostream>
#include <cstring>
using namespace std;

void find_same_char(const char* p, const char* q) {
    while (*p != '\0' && *q != '\0') {
        if (*p == *q) {
            cout << *p << ", ";
        }
        p++;
        q++;
    }
}

int main()
{
    const char* s1 = "forward";
    const char* s2 = "fortune";
    find_same_char(s1, s2);
    return 0;
}*/