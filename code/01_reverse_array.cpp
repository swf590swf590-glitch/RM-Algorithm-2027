#include<stdio.h>
#include<iostream>
// 使用首尾指针原地交换数组元素，不额外创建数组。
void reverseArray(int* arr, int n) {
	if (n <= 1) {
		return;
	}
	int *left = arr;
	int *right = arr + n - 1;
	while(left < right) {
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
	if (n < 0||n > 100) {
		return 0;
	}
	for(int i = 0;i < n;i++) {
		std::cin >> arr[i];
	}
	reverseArray(arr,n);
	for(int i = 0;i < n;i++) {
		if (i > 0) {
			printf(" ");
		}
		printf("%d",arr[i]);
	}
	printf("\n");
	return 0;
}
