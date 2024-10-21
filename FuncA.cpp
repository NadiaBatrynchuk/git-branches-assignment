// FuncA.cpp
#include "FuncA.h"

// Функція обчислює суму перших n елементів ряду експоненти
// n - кількість елементів ряду, які потрібно врахувати в сумі
double FuncA::calculate(int n) {
    double sum = 0;
    double x = 1;  // наприклад, оберемо x = 1
    for (int i = 0; i < n; ++i) {
        double term = pow(x, i) / factorial(i);  // використаємо x^n / n!
        sum += term;
    }
    return sum;
}

// Функція обчислює факторіал числа n
// n - ціле число, для якого обчислюється факторіал
// Повертає n! (факторіал числа n)
int factorial(int n) {
    return (n == 0 || n == 1) ? 1 : n * factorial(n - 1);
}
