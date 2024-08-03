/*
实验六、继承和多态
1、由二维坐标点类point作为基类，
派生出矩形类rectangle；
再由矩形类rectangle作为基类,
派生出长方体类cuboid。
为每个类设计构造函数，
点类中添加成员函数能够计算任意两点的距离，
矩形类中添加成员函数能够计算面积和周长，
长方体类添加成员函数能够计算长方体的体积。
（提示：点类数据成员包括点的x，y坐标；
矩形类可用左上角点和右下角点表示；
长方体类增加数据成员存储长方体的高）

#include <iostream>
#include <cmath>
using namespace std;

class point
{
private:
    double x, y;
public:
    // 构造函数
    point(double x = 0, double y = 0) : x(x), y(y) {}
    //定义三个成员函数，分别用于计算两点之间的距离、获取x坐标和获取y坐标
    double distance(const point& p) const
    {
        return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
    }
    double get_x() const
    {
        return x;
    }
    double get_y() const
    {
        return y;
    }
};

class rectangle : public point
{
    //矩形类继承自点类
    // 矩形类的数据成员包括左上角点和右下角点
private:
    point top_left, bottom_right;
public:
    // 构造函数以及计算面积和周长的成员函数
    rectangle(const point& top_left = point(0, 0), const point& bottom_right = point(0, 0))
        :  top_left(top_left), bottom_right(bottom_right) {}
    double area() const
    {
        // 计算矩形面积
        double length = abs(bottom_right.get_x() - top_left.get_x());
        double width = abs(bottom_right.get_y() - top_left.get_y());
        return length * width;
    }
    double perimeter() const
    {
        // 计算矩形周长
        double length = abs(bottom_right.get_x() - top_left.get_x());
        double width = abs(bottom_right.get_y() - top_left.get_y());
        return 2 * (length + width);
    }

};

class cuboid : public rectangle
{
    // 长方体类继承自矩形类
	// 长方体类的数据成员包括长方体的高
private:
    double height;
public:
    // 构造函数以及计算体积的成员函数,对点初始化，并将面的两个点初始化
    cuboid(const point& top_left = point(0, 0), const point& bottom_right = point(0, 0), double height = 0)
        : rectangle(top_left, bottom_right), height(height) {}
    double volume() const
    {
        return area() * height;
    }
};

int main()
{
    point p1(0, 0), p2(6, 8);
    rectangle rect(p1, p2);
    cuboid cuboid(p1, p2, 10);
    cout << "p1和p2距离为： " << p1.distance(p2) << endl;
    cout << "矩形面积为： " << rect.area() << endl;
    cout << "矩形周长为： " << rect.perimeter() << endl;
    cout << "长方体体积为 " << cuboid.volume() << endl;
    return 0;
}*/