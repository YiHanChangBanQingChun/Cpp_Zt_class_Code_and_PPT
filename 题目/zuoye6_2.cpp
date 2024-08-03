/*
2�����дһ��������Shape, �м���������麯��getArea(),
�ͼ����ܳ����麯��getPerim().�ڴ˻�������������Rectangle��Circle,
���ֱ�ʵ��getArea()��getPerim()������������ָ��shape���ָ�룬
��ͨ����ָ��ʵ�����ж�̬�ԡ�

#include <iostream>
#include <cmath>
#define PI 3.14159265358979323846
using namespace std;

// ������Shape
class Shape {
public:
    virtual double getArea() = 0; // ����������麯��
    virtual double getPerim() = 0; // �����ܳ����麯��
    //�麯���ͳ�������������ߴ��������ԣ���չ�ԣ���̬��
};

// ������Rectangle
class Rectangle : public Shape {
private:
    double width, height;
public:
    // ���캯��
    Rectangle(double w, double h) : width(w), height(h) {}
    double getArea() override { 
        return width * height;
    } // ʵ�ּ�������ĺ���
    double getPerim() override { 
        return 2 * (width + height);
    } // ʵ�ּ����ܳ��ĺ���
};

// ������Circle
class Circle : public Shape {
private:
    double r;
public:
    // ���캯��
    Circle(double r) : r(r) {}
    double getArea() override { 
        return PI * pow(r,2); 
    } // ʵ�ּ�������ĺ���
    double getPerim() override { 
        return 2 * PI * r; 
    } // ʵ�ּ����ܳ��ĺ���
};

// ������
int main() {
    // ����ָ��shape���ָ��
    Shape* shape1 = new Rectangle(10.0, 4.0);
    Shape* shape2 = new Circle(3.0);

    cout << "��������� " << shape1->getArea() 
        << "���ܳ��� " << shape1->getPerim() << endl;
    cout << "Բ������� " << shape2->getArea() 
        << "���ܳ��� " << shape2->getPerim() << endl;
    // �ͷ��ڴ�
    delete shape1;
    delete shape2;

    return 0;
}*/