// FuncA.cpp
#include "FuncA.h"

double FuncA::calculate() {
    double sum = 0;
    double x = 1;  // наприклад, x = 1
    for (int i = 0; i < 3; ++i) {  // лише 3 елементи
        double term = pow(x, i) / factorial(i);
        sum += term;
    }
    return sum;
}
