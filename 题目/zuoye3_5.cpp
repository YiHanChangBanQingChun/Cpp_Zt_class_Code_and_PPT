/*
��3��ѧ����ÿ��ѧ������Ϣ����ѧ�š��Ա����������ſεĳɼ���
��ʼ����3��ѧ������Ϣ��Ҫ�������ƽ���ɼ���ߵ�ѧ����Ϣ��
����ѧ�š��Ա�������ƽ���ɼ���

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
        cout << "ѧ��: " << num << 
            ", ����: " << name <<
            ", �Ա�: " << sex <<
            ", ƽ���ɼ�: " << average << endl;
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
        Student(192, "����", "��", 80, 85, 90, 95),
        Student(168, "����", "Ů", 85, 90, 95, 100),
        Student(11, "����", "��", 90, 95, 100, 99)
    };

    Student highest = Findhighestaverage(students, 3);
    highest.Printinfo();

    return 0;
}
*/