/*
��д���������ַ����������ո񣩣�
ͳ�����е��ʵĸ�����
����֮����һ�������ո�ָ���

#include <iostream>
#include <string>
using namespace std;

int count_words(const string& str) {
    int count = 0; //������
    bool in_word = false;
    for (char c : str) {
        if (c == ' ') {
            in_word = false;
        }
        else {
            if (!in_word) {
                count++;
                in_word = true;
            }
        }
    }
    return count;
}

int main() {
    string str;
    cout << "�������ַ�����";
    getline(cin, str); // ��ȡһ���ַ���
    cout << "���ʵĸ����ǣ�" << count_words(str) << endl;
    return 0;
}*/