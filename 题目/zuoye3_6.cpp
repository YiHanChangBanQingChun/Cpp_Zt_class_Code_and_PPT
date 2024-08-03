/*
6.candy结构包含3个成员。
第一个成员存储candy的品牌名称;
第二个成员存储candy的重量(可能有小数);
第三个成员存储candy的热量(整数)。
请编写一个程序，它使用一个这样的函数，
该函数的功能是对candy结构的变量设置各成员的值。
将Candy的引用、char指针、double和int作为参数，
并用最后3个值设置相应的结构成员。
最后3个参数的默认值分别为“Millennium Munch ",
2.85和350，函数的返回值是candy结构体变量。
另外，该程序还包含一个以Candy的引用为参数，
并显示结构内容的函数。请尽可能使用const 。

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
} // 设置candy的成员并返回Candy对象

void Printcandy(const Candy& candy) {
    cout << "品牌: " << candy.brand << ", 重量: "
        << candy.weight << ", 热量: " << candy.calorie << endl;
} // 输出candy的成员

int main() {
    Candy candy, candy2, candy3;
    Printcandy(Setcandy(candy, "M&M", 3.5, 400));
    Printcandy(Setcandy(candy2, "Snickers", 2.5, 300));
    Printcandy(Setcandy(candy3));
    return 0;
}*/