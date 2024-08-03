/*
实验四、数组、指针和引用
1．编程实现功能：删去一维数组中所有相同的数，
使之只剩一个。数组中的数已按由小到大的顺序排列，
输出修改后的数组。
例如，若一维数组中的数据是：  
2 2 2 3 4 4 5 6 6 6 6 7 7 8 9 9 10 10 10
删除后，数组中的内容应该是：2 3 4 5 6 7 8 9 10

#include <iostream>
using namespace std;

void remove_same_num(int* arr, int& n) {
    if (n == 0 || n == 1) // 数组为空或只有一个元素
        return;

    int* p = arr; //创建初始化指针，指向数组第一个元素

    for (int* q = arr + 1; q != arr + n; q++) {
        //如果当前元素和前一个元素不相等，
        //则将当前元素复制到第二个指针指向的位置，
        //并将第二个指针向前移动一位
        if (*q != *p)
            *(++p) = *q;
    }

    n = p - arr + 1; // 更新数组长度
}

void Exchange_two_number(int* a, int* b) {
    int temp = *a; //交换两数
    *a = *b;
    *b = temp;
}

void bubble_sort(int* arr, int n) {
    //冒泡排序
    for (int* p = arr; p != arr + n - 1; p++) {
        for (int* q = arr; q != arr + n - (p - arr) - 1; q++) {
            if (*q > *(q + 1)) {
                Exchange_two_number(q,q+1);//交换两数
            }
        }
    }
}

void printArray(int* arr, int n) {
    //依次输出数组中的元素
    for (int* p = arr; p != arr + n; p++)
        cout << *p << "， ";
    cout << endl;
}

int main() {
    int arr[] = { 2, 2,4, 6, 3, 1, 4, 5, 6, 6,
        6, 3, 7, 5, 8, 9, 9,8, 10, 10 };
    //通过字节大小与总占用大小计算数组长度
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "移除前数组为：";
    printArray(arr, n);//输出
    bubble_sort(arr, n); //排序
    cout << "排序后为：";
    printArray(arr, n);//输出
    remove_same_num(arr, n);//去重
    cout << "移除后数组为：";
    printArray(arr, n);//输出

    return 0;
}*/