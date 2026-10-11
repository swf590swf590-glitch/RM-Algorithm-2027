#include <iostream>

long long climbStairsRecur(int n) {
    if (n == 0||n == 1) {
        return 1;
    }
    return climbStairsRecur(n - 1) + climbStairsRecur(n - 2);
}

long long climbStairsIter(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    long long a = 1;
    long long b = 1;

    for (int i = 2; i <= n; i++) {
        long long next = a + b;
        a = b;
        b = next;
    }

    return b;
}

int main() {
    int n;
    std::cin >> n;

    if (n < 0||n >40) {
    return 0;
    }

    long long result1 = climbStairsRecur(n);
    long long result2 = climbStairsIter(n);
    
    std::cout << "Recursive: " << result1 << "\n";
    std::cout << "Iterative: " << result2 << "\n";
    std::cout << "Equal: " << std::boolalpha << (result1 == result2) << "\n";

    return 0;
}
