/*
2、请编写一个抽象类Shape, 有计算面积的虚函数getArea(),
和计算周长的虚函数getPerim().在此基础上派生出类Rectangle和Circle,
并分别实现getArea()和getPerim()，主函数定义指向shape类的指针，
并通过该指针实现运行多态性。

#include <iostream>
#include <cmath>
#define PI 3.14159265358979323846
using namespace std;

// 抽象类Shape
class Shape {
public:
    virtual double getArea() = 0; // 计算面积的虚函数
    virtual double getPerim() = 0; // 计算周长的虚函数
    //虚函数和抽象类有助于提高代码重用性，扩展性，多态性
};

// 派生类Rectangle
class Rectangle : public Shape {
private:
    double width, height;
public:
    // 构造函数
    Rectangle(double w, double h) : width(w), height(h) {}
    double getArea() override { 
        return width * height;
    } // 实现计算面积的函数
    double getPerim() override { 
        return 2 * (width + height);
    } // 实现计算周长的函数
};

// 派生类Circle
class Circle : public Shape {
private:
    double r;
public:
    // 构造函数
    Circle(double r) : r(r) {}
    double getArea() override { 
        return PI * pow(r,2); 
    } // 实现计算面积的函数
    double getPerim() override { 
        return 2 * PI * r; 
    } // 实现计算周长的函数
};

// 主函数
int main() {
    // 定义指向shape类的指针
    Shape* shape1 = new Rectangle(10.0, 4.0);
    Shape* shape2 = new Circle(3.0);

    cout << "矩形面积： " << shape1->getArea() 
        << "，周长： " << shape1->getPerim() << endl;
    cout << "圆形面积： " << shape2->getArea() 
        << "，周长： " << shape2->getPerim() << endl;
    // 释放内存
    delete shape1;
    delete shape2;

    return 0;
}*/