#include <iostream>



#define MODE 1

#ifndef MODE
#error "Необходимо определить MODE"
#endif

#if MODE == 0
#define Training_MODE
#endif

#if MODE == 1
#define Combat_MODE
#endif


#ifdef Training_MODE
#define Message "Работаю в режиме тренировки"
#endif

#ifdef Combat_MODE
#define Message "Работаю в боевом режиме"
#endif

int add(int a, int b)
{
    return a + b;
}

int main()
{
    setlocale(LC_ALL, "Russian");

#ifdef Training_MODE
    std::cout << Message << std::endl;
#elif defined(Combat_MODE)
    std::cout << Message << std::endl;

    int a, b;

    std::cout << "Введите число 1: ";
    std::cin >> a;
    std::cout << "Введите число 2: ";
    std::cin >> b;

    std::cout << "Результат сложения: " << add(a, b) << std::endl;
#endif
    
    return 0;
}
