/*
6.candy�ṹ����3����Ա��
��һ����Ա�洢candy��Ʒ������;
�ڶ�����Ա�洢candy������(������С��);
��������Ա�洢candy������(����)��
���дһ��������ʹ��һ�������ĺ�����
�ú����Ĺ����Ƕ�candy�ṹ�ı������ø���Ա��ֵ��
��Candy�����á�charָ�롢double��int��Ϊ������
�������3��ֵ������Ӧ�Ľṹ��Ա��
���3��������Ĭ��ֵ�ֱ�Ϊ��Millennium Munch ",
2.85��350�������ķ���ֵ��candy�ṹ�������
���⣬�ó��򻹰���һ����Candy������Ϊ������
����ʾ�ṹ���ݵĺ������뾡����ʹ��const ��

#include <iostream>
#include <string>
using namespace std;

struct Candy
{
    string brand;
    double weight;
    int calorie;
};

Candy Setcandy(Candy& candy, const char* brand = "Millennium Munch",
    const double weight = 2.85, const int calorie = 350) {
    candy.brand = brand;
    candy.weight = weight;
    candy.calorie = calorie;
    return candy;
} // ����candy�ĳ�Ա������Candy����

void Printcandy(const Candy& candy) {
    cout << "Ʒ��: " << candy.brand << ", ����: "
        << candy.weight << ", ����: " << candy.calorie << endl;
} // ���candy�ĳ�Ա

int main() {
    Candy candy, candy2, candy3;
    Printcandy(Setcandy(candy, "M&M", 3.5, 400));
    Printcandy(Setcandy(candy2, "Snickers", 2.5, 300));
    Printcandy(Setcandy(candy3));
    return 0;
}*/