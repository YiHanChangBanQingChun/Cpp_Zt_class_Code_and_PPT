/*
实验二、程序控制结构
1.超市为了促销，经常打折销售。
购物超过50元，即可打折优惠 1. 超过50元，打9.5折
2.超过100元，则打9折 3.超过200元，则打8折
4.超过300元，则打7折 当购物满s元时，实际付费多少呢？


#include <iostream>
using namespace std;

double price_calculator(double price_before) { 
    if (price_before > 300) {
        return price_before * 0.7;
    }
    else if (price_before > 200) {
        return price_before * 0.8;
    }
    else if (price_before > 100) {
        return price_before * 0.9;
    }
    else if (price_before > 50) {
        return price_before * 0.95;
    }
    else {
        return price_before;
    }
}
int main() {
    double price_before, price_after;
    cout << "请输入购物金额: ";
    cin >> price_before;
    price_after = price_calculator(price_before);
    cout << "实际需要支付: " << price_after<< endl;
    return 0;
}
*/
