/*
3、假设某销售公司有销售经理和销售员工，月工资的计算办法是：
销售经理的固定月薪为8000元并提取销售额的千分之五作为工资；
销售员工只提取销售额的千分之五作为工资。
编一程序，定义一个基类employee，
	它包含四个数据成员number（工号）、name（姓名）、
	salary（工资）和totalsalary(总工资)，
	其中totalsalary是静态数据成员，
	以及用于输入编号和姓名的构造函数，
	用于计算工资的虚函数pay（）。
由employee类派生salesman，
再由salesman类派生salesmanager类。
	salesman类包含新数据成员sales（销售额），
	还包含重新定义的计算工资的函数pay()
	和用于输出的成员函数print()。
	salesmanager类包含新数据成员 monthlypay，
	及用于重新定义的计算工资的成员函数pay()、
	用于输出的成员函数print()。
在main函数中，测试你的类结构，
	求若干个不同员工的工资和所有员工的总工资，
	需要利用指向基类对象的指针实现动态多态性。

#include <iostream>
#include <string>
using namespace std;

class employee
{
public:
    // 构造函数
    employee(int n, string nam) :
        number(n), name(nam), salary(0) {}
    //创建两个虚函数，尽管题目未要求创建print的虚函数
    //尽管目前状况相同，但是为了未来可能的成员变化，故创建
    virtual double pay() = 0;
    virtual void print() = 0;
    //静态数据成员
    static double totalsalary;

protected:
    //数据成员，属于被保护的
    int number;
    string name;
    double salary;
};
//静态数据成员初始化
double employee::totalsalary = 0;

class salesman : public employee
{
public:
    salesman(int n, string nam, double s) :
        //调用基类的构造函数
        employee(n, nam), sales(s) {}
    double pay() override {
        //销售员工只提取销售额的千分之五作为工资
        salary = sales * 0.005;
        totalsalary += salary;
        return salary;
    }
    void print() override {
        //输出工号，姓名，工资
        cout << "工号：" << number << "，姓名："
            << name << "，工资：" << salary << endl;
    }
protected:
    //使用被保护类，旨在获取销售额
    double getsales() {
		return sales;
	}
private:
    double sales;
};

class salesmanager : public salesman
{
public:
    //构造函数
    salesmanager(int n, string nam, double s, double mp) :
        salesman(n, nam, s), monthlypay(mp) {}
    //销售经理的固定月薪为8000元并提取销售额的千分之五作为工资
    double pay() override {
        salary = monthlypay + getsales() * 0.005;
        totalsalary += salary;
        return salary;
    }
    //输出工号，姓名，工资
    void print() override {
        cout << "工号：" << number << "，姓名："
            << name << "，工资：" << salary << endl;
    }

private:
    double monthlypay;
};

int main() {
    // 定义指向employee类的指针，实现动态多态性
    employee* employees[5];
    employees[0] = new salesman(11, "小泽", 10000);
    employees[1] = new salesman(22, "小张", 20000);
    employees[2] = new salesmanager(33, "小陈", 30000, 8000);
    employees[3] = new salesman(44, "小冯", 150000);
    employees[4] = new salesmanager(55, "小龙", 80000, 8000);
    // 计算工资并输出
    for (int i = 0; i < 5; i++) {
        employees[i]->pay();
        employees[i]->print();
    }

    cout << "所有员工的总工资：" << employee::totalsalary << endl;

    for (int i = 0; i < 5; i++) {
        delete employees[i];
    }
}*/
