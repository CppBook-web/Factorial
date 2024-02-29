// Factorial.cpp
#include <iostream>

int main() {
    setlocale(LC_ALL, "rus");
    int n = 0;
    long factorial = 1.0;

    std::cout << "Введите положительное целое число: ";
    std::cin >> n;

    if (n < 0)
        std::cout << "Ошибка! Факториал не может быть "
            << "отрицательным числом.";
    else {
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        std::cout << "Факториал числа " << n << " = "
            << factorial;
    }

    return 0;
}