/*
7、编写一个函数area()，通过函数重载完成圆形，
正方形，长方形，平行四边形，三角形，梯形的面积计算。
（提示：正方形和长方形看作特殊的平行四边形，
三角形看作特殊的梯形。

#include <iostream>
#include <cmath>
using namespace std;

// 圆形的面积
double area(double r) {
    double result = 3.1415926535 * r * r;
    cout << "圆形的面积：" << result << endl;
    return result;
}

// 正方形、长方形、平行四边形的面积
double area(double base, double height) {
    double result = base * height;
    cout << "正方形、长方形、平行四边形的面积：" << result << endl;
    return result;
}

// 三角形或梯形的面积
double area(double base, double height, double top) {
    double result;
    if (top == 0) {
        // 三角形的面积
        result = base * height / 2;
        cout << "三角形的面积：" << result << endl;
    }
    else {
        // 梯形的面积
        result = (base + top) * height / 2;
        cout << "梯形的面积：" << result << endl;
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