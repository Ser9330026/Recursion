// Recursion.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Рекурсия - прием программирования, при котором ф-ция вызывает саму себя либо непосредственно либо косвенно

#include <iostream>

long long factorial(int num) {
    if (num < 0) 
        return 0;
    if (num == 0)
        return 1;
    return factorial(num - 1) * num;
}

int fibonacci(int num) {
    if (num == 0) return 0;
    if (num == 1) return 1;
    return fibonacci(num - 1) + fibonacci(num - 2);
}



int main()
{
    setlocale(LC_ALL, "rus");
    int n;

    //Факториал
    //std::cout << "Введите число: ";
    //std::cin >> n;
    //std::cout << "!=" << factorial(n) << '\n';

    //Числа Фибоначчи
    std::cout << "Введите номер числа Ф: ";
    std::cin >> n;

    std::cout << fibonacci(n);
}

