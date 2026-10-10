// 崇实战队27赛季算法组第一次作业 - 第1题（练习草稿）
// 当前版本用于确认双指针核心逻辑；尚未按原题要求接收标准输入。
#include <iostream>

void reverseArray(int* arr, int n) {
    if (n <= 1) {
        return;  // 0个或1个元素无需反转
    }

    int* left = arr;
    int* right = arr + n - 1;

    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;
        ++left;
        --right;
    }
}

int main() {
    // TODO: 改为读取 n 和 n 个整数，而不是使用写死的数据。
    // TODO: 根据题目要求考虑 n=0，保持原地反转。
    int arr[5] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, n);

    // TODO: 检查输出格式，元素之间用一个空格隔开。
    for (int i = 0; i < n; ++i) {
        if (i > 0) std::cout << ' ';
        std::cout << arr[i];
    }
    std::cout << '\n';
    return 0;
}
