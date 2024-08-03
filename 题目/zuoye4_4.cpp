/*
3、设计学生student结构体，
包括（no,name,sex,age,dept）数据域，
编程实现包含5个学生数据的结构体数组，
并初始化，输入学号（no），利用指针
查找该学生并输出其所有数据。

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
            cout << "学号：" << s->no << endl;
            cout << "姓名：" << s->name << endl;
            cout << "性别：" << s->sex << endl;
            cout << "年龄：" << s->age << endl;
            cout << "系别：" << s->dept << endl;
            found = true;
            break;
        }
    }
    if (!found) {
		cout << "未找到学号为" << no << "的学生" << endl;
	}
}

int main()
{
    student s[5] = {
        {1, "Tom", "male", 20, "翻斗大街翻斗花园2号楼1001室"},
        {2, "Jerry", "female", 21, "翻斗大街翻斗花园5号楼1001室"},
        {3, "Sun", "male", 98, "翻斗大街翻斗花园2号楼7001室"},
        {4, "Sherry", "female", 73, "翻斗大街翻斗花园6号楼1001室"},
        {5, "Dam", "male", 25, "翻斗大街翻斗花园2号楼1006室"}
    };

    int no;
    cout << "请输入学号：" << endl;
    cin >> no;

    find_and_print_student(s, no, 5);

    return 0;
}*/