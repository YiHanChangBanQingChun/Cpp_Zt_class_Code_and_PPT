/*
7����дһ������area()��ͨ�������������Բ�Σ�
�����Σ������Σ�ƽ���ı��Σ������Σ����ε�������㡣
����ʾ�������κͳ����ο��������ƽ���ı��Σ�
�����ο�����������Ρ�

#include <iostream>
#include <cmath>
using namespace std;

// Բ�ε����
double area(double r) {
    double result = 3.1415926535 * r * r;
    cout << "Բ�ε������" << result << endl;
    return result;
}

// �����Ρ������Ρ�ƽ���ı��ε����
double area(double base, double height) {
    double result = base * height;
    cout << "�����Ρ������Ρ�ƽ���ı��ε������" << result << endl;
    return result;
}

// �����λ����ε����
double area(double base, double height, double top) {
    double result;
    if (top == 0) {
        // �����ε����
        result = base * height / 2;
        cout << "�����ε������" << result << endl;
    }
    else {
        // ���ε����
        result = (base + top) * height / 2;
        cout << "���ε������" << result << endl;
    }
    return result;
}

int main() {
    area(3);
    area(3, 9);
    area(5, 4);
    area(7, 4, 0);
    area(3, 8, 5);
    return 0;
}*/