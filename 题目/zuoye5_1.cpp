/*
ʵ���塢��Ͷ���
1����д����ʵ����Ʒ�����ۡ�
����������    ��Ʒ�ࣨproduct����
��  ˽��  ���ݳ�Ա����      ��Ʒ����pname���ַ�ָ�����ͣ�ָ���ַ�����
��    ���ۣ�price��float���ͣ���    �������(stock��int����)��
�;�̬���ݳ�Ա    Ʒ��������variety��int���ͣ�.

��Ա�����������캯���������ݳ�Ա���г�ʼ����
������Ĭ��ֵ��ÿ�����µ���Ʒ����variety��1����

����������
��ӡ��Ʒ��Ϣ����(print������
�ɴ�ӡ��Ʒ�Ĳ�Ʒ�������ۣ���������ú���Ϊconst��������

���ۺ�����sale��������������������������num����
�����ǿ������-�������������������۶��

��ȡ��Ʒ���ƺ�����getpname�������ú���Ϊconst������

���ĵ��ۺ�����setprice���������ڸ��Ĳ�Ʒ���ۣ���

���Ŀ�溯����setstock���������ڸ��Ĳ�Ʒ�Ŀ��������

topprice�����������ҵ�������ߵ���Ʒ���������Ʒ���͵��ۡ�

��������ʵ����Ʒ����  ��̬  ���飨new�����������ʼ����
��������������Ʒ��Ҫ����Ʒ������������  ����  ���룬
  ���  ��������Ʒ����Ʒ����������������


#include <iostream>
#include <string>
using namespace std;

class product {
private:
    // ������Ʒ��
    string pname;
    float price;
    int stock;
    static int variety;

public:
    product(string name, float p, int s) : pname(name), price(p), stock(s) {
        // ���캯��
        variety++;
    }

    ~product() {
        // ��������
        variety--;
    }

    void print() const {
        // ��ӡ��Ʒ��Ϣ
        cout << "��Ʒ����" << pname << endl;
        cout << "���ۣ�" << price << endl;
        cout << "�������" << stock << endl;
    }

    bool check_stock(int num) const {
        // �����
        if (num > stock) {
            cout << "��治�㣬�޷����ۡ�" << endl;
            return false;
        }
        return true;
    }

    float sale(int num) {
        // ����
        stock -= num;
        return num * price;
    }

    string getpname() const {
        // ��ȡ��Ʒ����
        return pname;
    }

    void setprice(float p) {
        // ���ĵ���
        price = p;
    }

    void setstock(int s) {
        // ���Ŀ��
        stock = s;
    }

    static void topprice(product* p, int n) {
        // �ҵ�������ߵ���Ʒ
        float max = p[0].price;
        int index = 0;
        for (int i = 1; i < n; i++) {
            if (p[i].price > max) {
                max = p[i].price;
                index = i;
            }
        }
        cout << "������ߵ���Ʒ�ǣ�" << p[index].getpname() << "������Ϊ��" << max << endl;
    }
};

int product::variety = 0;

int main() {
    product* p = new product[2]{
        // ��Ʒ����̬����
        product("HUAWEI", 1999.0, 999),
        product("IEWAUH", 9991.0, 999)
    };
    string name;
    cout << "������������Ʒ�����ƣ�" << endl;
    cin >> name;
    //�����Ʒ���Ƿ����
    int index = -1;
    for (int i = 0; i < 2; i++) {
        if (p[i].getpname() == name) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        cout << "��Ʒ�������ڡ�" << endl;
        delete[] p;
        return 0;
    }
    //�����
    int num;
    cout << "������������Ʒ��������" << endl;
    cin >> num;
    if (!p[index].check_stock(num)) {
        delete[] p;
        return 0;
    }
    //�����Ϣ
    cout << "������Ʒ����Ϣ���£�" << endl;
    cout << "��Ʒ����" << name << endl;
    cout << "����������" << num << endl;
    cout << "���۽�" << p[index].sale(num) << endl;
    product::topprice(p, 2);
    delete[] p;
}*/