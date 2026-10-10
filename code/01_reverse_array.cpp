// 崇实战队27赛季算法组第一次作业 - 第1题
// 2026-10-10 学生独立编写的最新练习版本（WIP：尚未完成输出格式和输入范围验证）
// TODO: 在 main 中读取 n 后、读入 arr 元素前验证 0 <= n <= 100
// TODO: 输出时以空格分隔数字，并在末尾换行
#include <stdio.h>
#include <iostream>

void reverseArray(int* arr, int n) {
    if (n <= 1) {
        return;
    }
    if (n < 0 || n > 100) {
        return;
    }

    int* left = arr;
    int* right = arr + n - 1;

    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
    return;
}

int main() {
    int arr[100];
    int n = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    reverseArray(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }
    return 0;
}
