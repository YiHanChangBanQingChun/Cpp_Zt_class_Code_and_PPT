/*
实验五、类和对象
1、编写程序实现商品的销售。
包括：定义    商品类（product），
其  私有  数据成员包括      商品名（pname，字符指针类型，指向字符串）
，    单价（price，float类型），    库存数量(stock，int类型)，
和静态数据成员    品种数量（variety，int类型）.

成员函数包括构造函数（对数据成员进行初始化，
可设置默认值，每生成新的商品对象，variety加1），

析构函数，
打印商品信息函数(print（），
可打印商品的产品名，单价，库存量，该函数为const函数），

销售函数（sale（），函数参数有销售数量（num），
功能是库存数量-销售数量，并返回销售额），

读取商品名称函数（getpname（），该函数为const函数）

更改单价函数（setprice（），用于更改产品单价），

更改库存函数（setstock（），用于更改产品的库存量），

topprice（），用于找到单价最高的商品，输出其商品名和单价。

主函数中实现商品对象  动态  数组（new运算符）并初始化，
销售其中两种商品，要求商品名和销售数量  键盘  输入，
  输出  所销售商品的商品名，销售数量，金额。


#include <iostream>
#include <string>
using namespace std;

class product {
private:
    // 定义商品类
    string pname;
    float price;
    int stock;
    static int variety;

public:
    product(string name, float p, int s) : pname(name), price(p), stock(s) {
        // 构造函数
        variety++;
    }

    ~product() {
        // 析构函数
        variety--;
    }

    void print() const {
        // 打印商品信息
        cout << "商品名：" << pname << endl;
        cout << "单价：" << price << endl;
        cout << "库存量：" << stock << endl;
    }

    bool check_stock(int num) const {
        // 检查库存
        if (num > stock) {
            cout << "库存不足，无法销售。" << endl;
            return false;
        }
        return true;
    }

    float sale(int num) {
        // 销售
        stock -= num;
        return num * price;
    }

    string getpname() const {
        // 读取商品名称
        return pname;
    }

    void setprice(float p) {
        // 更改单价
        price = p;
    }

    void setstock(int s) {
        // 更改库存
        stock = s;
    }

    static void topprice(product* p, int n) {
        // 找到单价最高的商品
        float max = p[0].price;
        int index = 0;
        for (int i = 1; i < n; i++) {
            if (p[i].price > max) {
                max = p[i].price;
                index = i;
            }
        }
        cout << "单价最高的商品是：" << p[index].getpname() << "，单价为：" << max << endl;
    }
};

int product::variety = 0;

int main() {
    product* p = new product[2]{
        // 商品对象动态数组
        product("HUAWEI", 1999.0, 999),
        product("IEWAUH", 9991.0, 999)
    };
    string name;
    cout << "请输入销售商品的名称：" << endl;
    cin >> name;
    //检查商品名是否存在
    int index = -1;
    for (int i = 0; i < 2; i++) {
        if (p[i].getpname() == name) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        cout << "商品名不存在。" << endl;
        delete[] p;
        return 0;
    }
    //检查库存
    int num;
    cout << "请输入销售商品的数量：" << endl;
    cin >> num;
    if (!p[index].check_stock(num)) {
        delete[] p;
        return 0;
    }
    //输出信息
    cout << "销售商品的信息如下：" << endl;
    cout << "商品名：" << name << endl;
    cout << "销售数量：" << num << endl;
    cout << "销售金额：" << p[index].sale(num) << endl;
    product::topprice(p, 2);
    delete[] p;
}*/