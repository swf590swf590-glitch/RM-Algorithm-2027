#include <iostream>
#include <limits>

constexpr int MAX_STUDENTS = 100;

void initScores(int* scores, int n) {
    for (int i = 0; i < n; i++) {
        scores[i] = -1;
    }
}

void inputScores(int* scores, int n) {
    for (int i = 0; i < n; i++) {
        int score;
        while (true) {
            std::cout << "请输入第" << i + 1 << "位学生的成绩：";
            if (!(std::cin >> score)) {
                if (std::cin.eof()) {
                    return;
                }
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "请输入0到100之间的整数。\n";
                continue;
            }
            if (score >= 0 && score <= 100) {
                scores[i] = score;
                break;
            }
            std::cout << "成绩不合法，请重新输入。\n";
        }
    }
}

double calcAverage(const int* scores, int n) {
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (scores[i] != -1) {
            sum += scores[i];
            count++;
        }
    }
    if (count == 0) {
        return 0.0;
    }
    return static_cast<double>(sum) / count;
}

int safeGet(const int* scores, int n, int index) {
    if (index < 0 || index >= n) {
        std::cout << "下标越界\n";
        return -1;
    }
    if (scores[index] == -1) {
        return -1;
    }
    return scores[index];
}

void countGrades(const int* scores, int n, int* counts) {
    for (int i = 0; i < 5; i++) {
        counts[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        int score = scores[i];
        if (score < 0 || score > 100) {
            continue;
        }
        if (score < 60) {
            counts[0]++;
        } else if (score < 70) {
            counts[1]++;
        } else if (score < 80) {
            counts[2]++;
        } else if (score < 90) {
            counts[3]++;
        } else {
            counts[4]++;
        }
    }
}

void findMinMax(const int* scores, int n, int* max, int* min) {
    for (int i = 0; i < n; i++) {
        if (scores[i] == -1) {
            continue;
        }
        if (*max == -1 || scores[i] > *max) {
            *max = scores[i];
        }
        if (*min == -1 || scores[i] < *min) {
            *min = scores[i];
        }
    }
}

void printResults(const int* scores, int n, double avg,
                  const int* counts, int max, int min) {
    std::cout << "成绩列表：";
    for (int i = 0; i < n; i++) {
        std::cout << scores[i] << " ";
    }
    std::cout << "\n";
    std::cout << "平均分：" << avg << "\n";
    std::cout << "最高分：" << max << "\n";
    std::cout << "最低分：" << min << "\n";
    const char* labels[5] = {"0-59", "60-69", "70-79", "80-89", "90-100"};
    for (int i = 0; i < 5; i++) {
        std::cout << labels[i] << "分人数：" << counts[i] << "\n";
    }
}

int main() {
    int scores[MAX_STUDENTS];
    int n;
    int counts[5] = {0};
    int max = -1, min = -1;
    double avg = 0.0;
    int testIndex;

    initScores(scores, MAX_STUDENTS);
    std::cout << "请输入学生人数：";
    if (!(std::cin >> n) || n < 0 || n > MAX_STUDENTS) {
        std::cout << "学生人数不合法。\n";
        return 1;
    }
    inputScores(scores, n);
    if (!std::cin) {
        std::cout << "成绩输入未完成。\n";
        return 1;
    }
    avg = calcAverage(scores, n);
    findMinMax(scores, n, &max, &min);
    countGrades(scores, n, counts);

    std::cout << "请输入要查询的下标：";
    if (!(std::cin >> testIndex)) {
        std::cout << "查询下标输入错误。\n";
        return 1;
    }
    int queried = safeGet(scores, n, testIndex);
    if (queried == -1) {
        std::cout << "查询失败\n";
    } else {
        std::cout << "下标 " << testIndex << " 的成绩是：" << queried << "\n";
    }
    printResults(scores, n, avg, counts, max, min);
    return 0;
}
