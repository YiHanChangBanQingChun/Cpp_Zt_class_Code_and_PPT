/*
ʵ�����������Ķ��������
1.��һ���������书���ǽ�������������ֵ��������������ô��ݷ�ʽ��


#include <iostream>
using namespace std;

void Exchange_two_number(int &a, int &b) {
	int temp = a;
	a = b;    //ʹ�����ô����Դﵽ�޸��ⲿ������Ŀ��
	b = temp; //�������ڲ���������Ӱ���ⲿ���
}
int main() {
    int x = 5, y = 10;
    cout << "����ǰ: x = " << x << ", y = " << y << endl;
    Exchange_two_number(x, y); //ʵ�������Դ�����swap()�Ĳ��ֹ���
    cout << "������: x = " << x << ", y = " << y << endl;
    return 0;
}
*/