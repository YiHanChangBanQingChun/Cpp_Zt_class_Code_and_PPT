/*
2����д���򣬱Ƚ������ַ����Ĵ�С��
������ʹ���ַ��������������2�У�
ÿһ�о�Ϊ�ַ������������ո񣩡�
�����һ���ַ������ڵڶ����ַ�����
�����1����������ַ�����С��ȣ������0��
�����һ���ַ���С�ڵڶ����ַ����������-1��

#include <iostream>
using namespace std;

int compare_strings(const char* str1, const char* str2) {
    // �Ƚ������ַ����Ĵ�С,ָ���������Ƚϣ�
    // ����һ��ϴ�ʱ������Ϊ�������ڵ��ַ�����
    while (*str1 && (*str1 == *str2)) { 
        //str1��str2ͬʱ��Ϊ'\0'���������ַ����ʱ�������Ƚ���һ���ַ�
        cout << "str1: " << *str1 << " str2: " << *str2 << endl;
        str1++;
        str2++;
    } // �������ַ������ַ������ʱ�����������ַ��Ĳ�ֵ
    return (*(unsigned char*)str1 - *(unsigned char*)str2);
}

void print_comparison_result(int result) {
    if (result > 0)
        cout << "1" << endl; // ��һ���ַ������ڵڶ����ַ���
    else if (result < 0)
        cout << "-1" << endl; // ��һ���ַ���С�ڵڶ����ַ���
    else
        cout << "0" << endl; // �����ַ������
}

int main() {
    char str1[100], str2[100];
    cout << "�������һ���ַ�����";
    cin >> str1;
    cout << "������ڶ����ַ�����";
    cin >> str2;

    int result = compare_strings(str1, str2);
    print_comparison_result(result);

    return 0;
}*/