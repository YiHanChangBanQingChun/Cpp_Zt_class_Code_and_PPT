/*
3������ĳ���۹�˾�����۾��������Ա�����¹��ʵļ���취�ǣ�
���۾���Ĺ̶���нΪ8000Ԫ����ȡ���۶��ǧ��֮����Ϊ���ʣ�
����Ա��ֻ��ȡ���۶��ǧ��֮����Ϊ���ʡ�
��һ���򣬶���һ������employee��
	�������ĸ����ݳ�Աnumber�����ţ���name����������
	salary�����ʣ���totalsalary(�ܹ���)��
	����totalsalary�Ǿ�̬���ݳ�Ա��
	�Լ����������ź������Ĺ��캯����
	���ڼ��㹤�ʵ��麯��pay������
��employee������salesman��
����salesman������salesmanager�ࡣ
	salesman����������ݳ�Աsales�����۶��
	���������¶���ļ��㹤�ʵĺ���pay()
	����������ĳ�Ա����print()��
	salesmanager����������ݳ�Ա monthlypay��
	���������¶���ļ��㹤�ʵĳ�Ա����pay()��
	��������ĳ�Ա����print()��
��main�����У����������ṹ��
	�����ɸ���ͬԱ���Ĺ��ʺ�����Ա�����ܹ��ʣ�
	��Ҫ����ָ���������ָ��ʵ�ֶ�̬��̬�ԡ�

#include <iostream>
#include <string>
using namespace std;

class employee
{
public:
    // ���캯��
    employee(int n, string nam) :
        number(n), name(nam), salary(0) {}
    //���������麯����������ĿδҪ�󴴽�print���麯��
    //����Ŀǰ״����ͬ������Ϊ��δ�����ܵĳ�Ա�仯���ʴ���
    virtual double pay() = 0;
    virtual void print() = 0;
    //��̬���ݳ�Ա
    static double totalsalary;

protected:
    //���ݳ�Ա�����ڱ�������
    int number;
    string name;
    double salary;
};
//��̬���ݳ�Ա��ʼ��
double employee::totalsalary = 0;

class salesman : public employee
{
public:
    salesman(int n, string nam, double s) :
        //���û���Ĺ��캯��
        employee(n, nam), sales(s) {}
    double pay() override {
        //����Ա��ֻ��ȡ���۶��ǧ��֮����Ϊ����
        salary = sales * 0.005;
        totalsalary += salary;
        return salary;
    }
    void print() override {
        //������ţ�����������
        cout << "���ţ�" << number << "��������"
            << name << "�����ʣ�" << salary << endl;
    }
protected:
    //ʹ�ñ������ּ࣬�ڻ�ȡ���۶�
    double getsales() {
		return sales;
	}
private:
    double sales;
};

class salesmanager : public salesman
{
public:
    //���캯��
    salesmanager(int n, string nam, double s, double mp) :
        salesman(n, nam, s), monthlypay(mp) {}
    //���۾���Ĺ̶���нΪ8000Ԫ����ȡ���۶��ǧ��֮����Ϊ����
    double pay() override {
        salary = monthlypay + getsales() * 0.005;
        totalsalary += salary;
        return salary;
    }
    //������ţ�����������
    void print() override {
        cout << "���ţ�" << number << "��������"
            << name << "�����ʣ�" << salary << endl;
    }

private:
    double monthlypay;
};

int main() {
    // ����ָ��employee���ָ�룬ʵ�ֶ�̬��̬��
    employee* employees[5];
    employees[0] = new salesman(11, "С��", 10000);
    employees[1] = new salesman(22, "С��", 20000);
    employees[2] = new salesmanager(33, "С��", 30000, 8000);
    employees[3] = new salesman(44, "С��", 150000);
    employees[4] = new salesmanager(55, "С��", 80000, 8000);
    // ���㹤�ʲ����
    for (int i = 0; i < 5; i++) {
        employees[i]->pay();
        employees[i]->print();
    }

    cout << "����Ա�����ܹ��ʣ�" << employee::totalsalary << endl;

    for (int i = 0; i < 5; i++) {
        delete employees[i];
    }
}*/
