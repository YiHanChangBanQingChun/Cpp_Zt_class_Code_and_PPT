/*
有3个学生，每个学生的信息包括学号、性别、姓名、四门课的成绩，
初始化这3个学生的信息，要求输出总平均成绩最高的学生信息，
包括学号、性别、姓名和平均成绩。

#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    Student(int n, string nam, string s,
        float s1, float s2,
        float s3, float s4) {
        num = n;
        name = nam;
        sex = s;
        score[0] = s1;
        score[1] = s2;
        score[2] = s3;
        score[3] = s4;
        average = (s1 + s2 + s3 + s4) / 4;
    }

    float Getaverage() {
        return average;
    }

    void Printinfo() {
        cout << "学号: " << num << 
            ", 姓名: " << name <<
            ", 性别: " << sex <<
            ", 平均成绩: " << average << endl;
    }

private:
    int num;
    string name, sex;
    float score[4];
    float average;
};

Student Findhighestaverage(Student students[], int n) {
    Student highest = students[0];
    for (int i = 1; i < n; i++) {
        if (students[i].Getaverage() > highest.Getaverage()) {
            highest = students[i];
        }
    }
    return highest;
}

int main() {
    Student students[] = {
        Student(192, "张三", "男", 80, 85, 90, 95),
        Student(168, "李四", "女", 85, 90, 95, 100),
        Student(11, "王五", "男", 90, 95, 100, 99)
    };

    Student highest = Findhighestaverage(students, 3);
    highest.Printinfo();

    return 0;
}
*/