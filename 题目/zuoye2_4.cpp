/*
4.���㲢���N��������10�������Լ����ǵĺͣ�
NΪ�û�������������������磺1000����

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void Sum_maximun_ten_prime_num_from_num(int num) {
    vector<int> primes;
    for (int i = num; i > 1 && primes.size() < 10; i--) {
        if (is_prime(i)==true) {
            primes.push_back(i);
        }
    }
    cout << "����10������Ϊ: ";
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;
    int sum = accumulate(primes.begin(), primes.end(), 0);
    cout << "����10�������ĺ�Ϊ: " << sum << endl;
}

int main() {
    int n;
    cout << "������һ��������: ";
    cin >> n;
    Sum_maximun_ten_prime_num_from_num(n);
    return 0;
}
*/