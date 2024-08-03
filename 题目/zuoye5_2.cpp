/*
2����д����ʵ��ʱ������㡣
����������ʱ���ࣨttime����
��˽�����ݳ�Ա����Сʱ��hours��int���ͣ���
���ӣ�minutes��int���ͣ���
��Ա�����������캯����ttime�������вκ��޲�������ʽ����
������������ص���ʽʹ֮�ܹ�ʵ��ʱ����ļӣ�+������
����-�����ˣ�*���������<<��,���루>>����
����+��-��*Ҫ�������������1��ʱ�����@ʱ�����@�����������
2�����㳣��@ʱ�����3��ʱ�����@���㳣����
ʱ������Ҫע����Ӻ�Сʱ��ת������
Main��������ʵ����֤�������塣

#include <iostream>
using namespace std;

class ttime
{
public:
    ttime(int hours = 0, int minutes = 0) {
        this->hours = hours;
        this->minutes = minutes;
    };
    ttime operator+(const ttime& t) const {
    // this���ʵ�ǰ����ĳ�Ա��t���ʴ���Ķ���ĳ�Ա
    // t��ttime�������ã�����ı�t��ֵ
        // ���������+��ʵ��ʱ�����
        int sum_minutes = this->hours * 60 + this->minutes + t.hours * 60 + t.minutes;
        return ttime(sum_minutes / 60 % 24, sum_minutes % 60);
    };
    ttime operator+(int minutes) const {
        int sum_minutes = this->hours * 60 + this->minutes + minutes;
        return ttime(sum_minutes / 60 % 24, sum_minutes % 60);
    };
    ttime operator-(const ttime& t) const {
        // ���������-��ʵ��ʱ�����
        int sum_minutes = this->hours * 60 + this->minutes - (t.hours * 60 + t.minutes);
        //��Ԫ������򻯴���
        sum_minutes = (sum_minutes < 0) ? sum_minutes + 24 * 60 : sum_minutes;
        return ttime(sum_minutes / 60 % 24, sum_minutes % 60);
    };
    ttime operator-(int minutes) const {
        int sum_minutes = this->hours * 60 + this->minutes - minutes;
        sum_minutes = (sum_minutes < 0) ? sum_minutes + 24 * 60 : sum_minutes;
        return ttime(sum_minutes / 60 % 24, sum_minutes % 60);
    };
    ttime operator*(float f) const {
        // ���������*��ʵ��ʱ����Ը�����
        int sum_minutes = (this->hours * 60 + this->minutes) * f;
        return ttime(sum_minutes / 60 % 24, sum_minutes % 60);
    };
    //��Ԫ�Է���˽�г�Ա������ostream�����ttime����������Ϊ����
    friend ostream& operator<<(ostream& os, const ttime& t) {
        //ʹ����Ԫ�������������<<��ʵ��ʱ������
        os << t.hours << "Сʱ" << t.minutes << "����";
        return os;
    };
    friend istream& operator>>(istream& is, ttime& t) {
        //ʹ����Ԫ�������������>>��ʵ��ʱ�������
        is >> t.hours >> t.minutes;
        return is;
    };
    friend ttime operator*(float f, const ttime& t);
     // ��Ա��������������ĸ�ʽ��
     // ReturnType ClassName::operatorSymbol(Parameters)
     // ʹ����Ԫ��������������ĸ�ʽ��
     // friend ReturnType operatorSymbol(Parameters)
private:
    int hours;
    int minutes;
};
// ʹ����Ԫ�������������*��ʵ�ָ���������ʱ��
ttime operator*(float f, const ttime& t) {
    return t * f;
}

int main() {
    ttime t1(2, 30);
    ttime t2(3, 42);
    cout << "t1: " << t1 << endl;
    cout << "t2: " << t2 << endl;
    cout << "t1 + t2: " << t1 + t2 << endl;
    cout << "t1 - t2: " << t1 - t2 << endl;
    cout << "t1 + 16: " << t1 + 16 << endl;
    cout << "t1 - 15: " << t1 - 15 << endl;
    cout << "t1 * 2.48: " << t1 * 2.48 << endl;
    cout << "2.5 * t1: " << 2.5 * t1 << endl;

    return 0;
}*/