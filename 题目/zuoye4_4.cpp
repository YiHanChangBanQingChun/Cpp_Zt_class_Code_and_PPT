/*
3�����ѧ��student�ṹ�壬
������no,name,sex,age,dept��������
���ʵ�ְ���5��ѧ�����ݵĽṹ�����飬
����ʼ��������ѧ�ţ�no��������ָ��
���Ҹ�ѧ����������������ݡ�

#include <iostream>
#include <string>
using namespace std;

struct student
{
    int no;
    string name;
    string sex;
    int age;
    string dept;
};

void find_and_print_student(student* s, int no, int size) {
    bool found = false;
    for (int i = 0; i < size; i++, s++) {
        if (s->no == no) {
            cout << "ѧ�ţ�" << s->no << endl;
            cout << "������" << s->name << endl;
            cout << "�Ա�" << s->sex << endl;
            cout << "���䣺" << s->age << endl;
            cout << "ϵ��" << s->dept << endl;
            found = true;
            break;
        }
    }
    if (!found) {
		cout << "δ�ҵ�ѧ��Ϊ" << no << "��ѧ��" << endl;
	}
}

int main()
{
    student s[5] = {
        {1, "Tom", "male", 20, "������ַ�����԰2��¥1001��"},
        {2, "Jerry", "female", 21, "������ַ�����԰5��¥1001��"},
        {3, "Sun", "male", 98, "������ַ�����԰2��¥7001��"},
        {4, "Sherry", "female", 73, "������ַ�����԰6��¥1001��"},
        {5, "Dam", "male", 25, "������ַ�����԰2��¥1006��"}
    };

    int no;
    cout << "������ѧ�ţ�" << endl;
    cin >> no;

    find_and_print_student(s, no, 5);

    return 0;
}*/