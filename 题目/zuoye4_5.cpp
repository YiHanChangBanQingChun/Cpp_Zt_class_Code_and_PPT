/*
5�������ַ���ָ��p��q��
�ֱ�ָ��"forward"�ַ�����"fortune"�ַ�����
��д��������ָ���ҳ������ַ�����ͬλ����
����ͬ�ַ�������˳�������

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