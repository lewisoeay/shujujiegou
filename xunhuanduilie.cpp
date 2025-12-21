#include <stdio.h>
#include <math.h>

int main() {
    int n;
    // 读取输入的正整数n
    scanf_s("%d", &n);
    // 计算n的平方根，缩小循环范围
    int sqrt_n = sqrt(n);
    // 遍历2到sqrt(n)，寻找第一个能整除n的因数
    for (int i = 2; i <= sqrt_n; i++) {
        if (n % i == 0) {
            // 题目规定n是两个不同质数的乘积，n/i即为较大的质数
            printf("%d\n", n / i);
            return 0;
        }
    }
    

    return 0;
}