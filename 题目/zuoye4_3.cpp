/*
编写程序，输入字符串（包含空格），
统计其中单词的个数，
单词之间以一个或多个空格分隔。

#include <iostream>
#include <string>
using namespace std;

int count_words(const string& str) {
    int count = 0; //计数器
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
    cout << "请输入字符串：";
    getline(cin, str); // 读取一行字符串
    cout << "单词的个数是：" << count_words(str) << endl;
    return 0;
}*/