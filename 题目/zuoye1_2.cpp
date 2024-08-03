/* 实验一、基本数据类型及运算
2.编程：输入3个不同线的点坐标x1,y1,x2,y2,x3,y3，
求围成的三角形的周长和面积。 
设边长为a,b,c，s=(a+b+c)/2 ，
area=sqrt(s*(s-a)(s-b)(s-c)) 

#include <cmath>
#include <iostream>
using namespace std;

class Point {
public:
    double x, y; // 点的坐标

    Point(double x, double y) : x(x), y(y) {}  // 构造函数
};

class Triangle {
private:
    Point p1, p2, p3;
    double a, b, c;

    double distance(Point p1, Point p2) {
        return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2)); // 两点间距离公式
    }

public:
    Triangle(Point p1, Point p2, Point p3) : p1(p1), p2(p2), p3(p3) {
        a = distance(p1, p2);
        b = distance(p2, p3);
        c = distance(p3, p1);
    }

    double perimeter() {
        return a + b + c; // 周长
    }

    double area() {
        double s = perimeter() / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c)); // 海伦公式
    }
};

int main() {
    double x1, y1, x2, y2, x3, y3;
    cout << "请输入第一个点的坐标(x1, y1): ";
    cin >> x1 >> y1;
    cout << "请输入第二个点的坐标(x2, y2): ";
    cin >> x2 >> y2;
    cout << "请输入第三个点的坐标(x3, y3): ";
    cin >> x3 >> y3;

    Point p1(x1, y1), p2(x2, y2), p3(x3, y3);
    Triangle t(p1, p2, p3);
    if (t.area() == 0) {
        cout << "错误: 三个点在一条直线上，不能构成三角形" << endl;
        return 1;
    }
    cout << "周长: " << t.perimeter() << endl;
    cout << "面积: " << t.area() << endl;
    return 0;
}*/