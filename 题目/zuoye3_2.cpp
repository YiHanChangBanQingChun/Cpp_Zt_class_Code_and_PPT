/*
2.��һ���������书���ǽ�������������ֵ�����������ָ�봫�ݷ�ʽ��


#include <iostream>
using namespace std;

void Exchange_two_number_v2(int* a, int* b) {
    int temp = *a;
    *a = *b; 
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    cout << "����ǰ: x = " << x << ", y = " << y << endl;
    cout << "��ַ: x = " << &x << ", y = " << &y << endl;
    Exchange_two_number_v2(&x, &y);
    cout << "������: x = " << x << ", y = " << y << endl;
    cout << "��ַ: x = " << &x << ", y = " << &y << endl;
    //�����˱�����ֵ�����Ǳ����ĵ�ַ��û�з����任
    return 0;
}
*/