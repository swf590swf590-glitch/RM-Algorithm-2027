// 崇实战队27赛季算法组第一次作业：第1题
// 学生最新提交的练习版本（WIP，尚未通过最终检查）
// TODO 1: 将 n 的合法性检查移到 cin 读取 n 之后、输入数组元素之前
// TODO 2: 修改输出格式，避免在最后一个元素后面多输出空格
#include <stdio.h>
#include <iostream>

void reverseArray(int* arr, int n) {
    if (n <= 1) {
        return;
    }
    int *left = arr;
    int *right = arr + n - 1;
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
    if (n < 0 || n > 100) {
        return 0;
    }
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    reverseArray(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
