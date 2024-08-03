/* ʵ��һ�������������ͼ�����
2.��̣�����3����ͬ�ߵĵ�����x1,y1,x2,y2,x3,y3��
��Χ�ɵ������ε��ܳ�������� 
��߳�Ϊa,b,c��s=(a+b+c)/2 ��
area=sqrt(s*(s-a)(s-b)(s-c)) 

#include <cmath>
#include <iostream>
using namespace std;

class Point {
public:
    double x, y; // �������

    Point(double x, double y) : x(x), y(y) {}  // ���캯��
};

class Triangle {
private:
    Point p1, p2, p3;
    double a, b, c;

    double distance(Point p1, Point p2) {
        return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2)); // �������빫ʽ
    }

public:
    Triangle(Point p1, Point p2, Point p3) : p1(p1), p2(p2), p3(p3) {
        a = distance(p1, p2);
        b = distance(p2, p3);
        c = distance(p3, p1);
    }

    double perimeter() {
        return a + b + c; // �ܳ�
    }

    double area() {
        double s = perimeter() / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c)); // ���׹�ʽ
    }
};

int main() {
    double x1, y1, x2, y2, x3, y3;
    cout << "�������һ���������(x1, y1): ";
    cin >> x1 >> y1;
    cout << "������ڶ����������(x2, y2): ";
    cin >> x2 >> y2;
    cout << "������������������(x3, y3): ";
    cin >> x3 >> y3;

    Point p1(x1, y1), p2(x2, y2), p3(x3, y3);
    Triangle t(p1, p2, p3);
    if (t.area() == 0) {
        cout << "����: ��������һ��ֱ���ϣ����ܹ���������" << endl;
        return 1;
    }
    cout << "�ܳ�: " << t.perimeter() << endl;
    cout << "���: " << t.area() << endl;
    return 0;
}*/