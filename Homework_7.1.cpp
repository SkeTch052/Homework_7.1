#include <iostream>
#include <locale.h>

#define MODE 1

#ifndef MODE
#error Error! You need to define MODE
#else 
    #if ((MODE) == 0)
int main() {
    setlocale(LC_ALL, "RUSSIAN");
    std::cout << "Работаю в режиме тренировки" << std::endl;
}
    #elif ((MODE) == 1)
int add(int x, int y) { return x + y; }

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    int num1, num2;
    std::cout << "Работаю в боевом режиме\n" << "Введите число 1: ";
    std::cin >> num1;
    std::cout << "Введите число 2: ";
    std::cin >> num2;
    std::cout << "Результат сложения: " << add(num1, num2) << std::endl;
}
    #else
int main() {
    setlocale(LC_ALL, "RUSSIAN");
    std::cout << "Неизвестный режим. Завершение работы" << std::endl;
}
    #endif
#endif