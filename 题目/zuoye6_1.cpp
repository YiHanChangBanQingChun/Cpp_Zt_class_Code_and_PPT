/*
ʵ�������̳кͶ�̬
1���ɶ�ά�������point��Ϊ���࣬
������������rectangle��
���ɾ�����rectangle��Ϊ����,
��������������cuboid��
Ϊÿ������ƹ��캯����
��������ӳ�Ա�����ܹ�������������ľ��룬
����������ӳ�Ա�����ܹ�����������ܳ���
����������ӳ�Ա�����ܹ����㳤����������
����ʾ���������ݳ�Ա�������x��y���ꣻ
������������Ͻǵ�����½ǵ��ʾ��
���������������ݳ�Ա�洢������ĸߣ�

#include <iostream>
#include <cmath>
using namespace std;

class point
{
private:
    double x, y;
public:
    // ���캯��
    point(double x = 0, double y = 0) : x(x), y(y) {}
    //����������Ա�������ֱ����ڼ�������֮��ľ��롢��ȡx����ͻ�ȡy����
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
    //������̳��Ե���
    // ����������ݳ�Ա�������Ͻǵ�����½ǵ�
private:
    point top_left, bottom_right;
public:
    // ���캯���Լ�����������ܳ��ĳ�Ա����
    rectangle(const point& top_left = point(0, 0), const point& bottom_right = point(0, 0))
        :  top_left(top_left), bottom_right(bottom_right) {}
    double area() const
    {
        // ����������
        double length = abs(bottom_right.get_x() - top_left.get_x());
        double width = abs(bottom_right.get_y() - top_left.get_y());
        return length * width;
    }
    double perimeter() const
    {
        // ��������ܳ�
        double length = abs(bottom_right.get_x() - top_left.get_x());
        double width = abs(bottom_right.get_y() - top_left.get_y());
        return 2 * (length + width);
    }

};

class cuboid : public rectangle
{
    // ��������̳��Ծ�����
	// ������������ݳ�Ա����������ĸ�
private:
    double height;
public:
    // ���캯���Լ���������ĳ�Ա����,�Ե��ʼ������������������ʼ��
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
    cout << "p1��p2����Ϊ�� " << p1.distance(p2) << endl;
    cout << "�������Ϊ�� " << rect.area() << endl;
    cout << "�����ܳ�Ϊ�� " << rect.perimeter() << endl;
    cout << "���������Ϊ " << cuboid.volume() << endl;
    return 0;
}*/