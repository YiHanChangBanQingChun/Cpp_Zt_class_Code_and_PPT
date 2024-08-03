/*
2、编写程序实现时间的运算。
包括：定义时间类（ttime），
其私有数据成员包括小时（hours，int类型），
分钟（minutes，int类型），
成员函数包括构造函数（ttime（），有参和无参两种形式），
利用运算符重载的形式使之能够实现时间类的加（+，），
减（-），乘（*），输出（<<）,输入（>>），
对于+，-，*要考虑三种情况（1、时间对象@时间对象，@代表运算符，
2、浮点常数@时间对象，3、时间对象@浮点常数。
时间运算要注意分钟和小时的转化）。
Main函数中以实例验证上述定义。

#include <iostream>
using namespace std;

class ttime
{
public:
    ttime(int hours = 0, int minutes = 0) {
        this->hours = hours;
        this->minutes = minutes;
    };
    ttime operator+(const ttime& t) const {
    // this访问当前对象的成员，t访问传入的对象的成员
    // t是ttime常量引用，不会改变t的值
        // 重载运算符+，实现时间相加
        int sum_minutes = this->hours * 60 + this->minutes + t.hours * 60 + t.minutes;
        return ttime(sum_minutes / 60 % 24, sum_minutes % 60);
    };
    ttime operator+(int minutes) const {
        int sum_minutes = this->hours * 60 + this->minutes + minutes;
        return ttime(sum_minutes / 60 % 24, sum_minutes % 60);
    };
    ttime operator-(const ttime& t) const {
        // 重载运算符-，实现时间相减
        int sum_minutes = this->hours * 60 + this->minutes - (t.hours * 60 + t.minutes);
        //三元运算符简化代码
        sum_minutes = (sum_minutes < 0) ? sum_minutes + 24 * 60 : sum_minutes;
        return ttime(sum_minutes / 60 % 24, sum_minutes % 60);
    };
    ttime operator-(int minutes) const {
        int sum_minutes = this->hours * 60 + this->minutes - minutes;
        sum_minutes = (sum_minutes < 0) ? sum_minutes + 24 * 60 : sum_minutes;
        return ttime(sum_minutes / 60 % 24, sum_minutes % 60);
    };
    ttime operator*(float f) const {
        // 重载运算符*，实现时间乘以浮点数
        int sum_minutes = (this->hours * 60 + this->minutes) * f;
        return ttime(sum_minutes / 60 % 24, sum_minutes % 60);
    };
    //友元以访问私有成员，接受ostream对象和ttime常量引用作为参数
    friend ostream& operator<<(ostream& os, const ttime& t) {
        //使用友元函数重载运算符<<，实现时间的输出
        os << t.hours << "小时" << t.minutes << "分钟";
        return os;
    };
    friend istream& operator>>(istream& is, ttime& t) {
        //使用友元函数重载运算符>>，实现时间的输入
        is >> t.hours >> t.minutes;
        return is;
    };
    friend ttime operator*(float f, const ttime& t);
     // 成员函数重载运算符的格式：
     // ReturnType ClassName::operatorSymbol(Parameters)
     // 使用友元函数重载运算符的格式：
     // friend ReturnType operatorSymbol(Parameters)
private:
    int hours;
    int minutes;
};
// 使用友元函数重载运算符*，实现浮点数乘以时间
ttime operator*(float f, const ttime& t) {
    return t * f;
}

int main() {
    ttime t1(2, 30);
    ttime t2(3, 42);
    cout << "t1: " << t1 << endl;
    cout << "t2: " << t2 << endl;
    cout << "t1 + t2: " << t1 + t2 << endl;
    cout << "t1 - t2: " << t1 - t2 << endl;
    cout << "t1 + 16: " << t1 + 16 << endl;
    cout << "t1 - 15: " << t1 - 15 << endl;
    cout << "t1 * 2.48: " << t1 * 2.48 << endl;
    cout << "2.5 * t1: " << 2.5 * t1 << endl;

    return 0;
}*/