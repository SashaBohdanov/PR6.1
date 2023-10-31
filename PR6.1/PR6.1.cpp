#include <iostream>
#include <ctime>
#include <cstdlib>

void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

int main()
{
    srand(static_cast<unsigned>(time(NULL)));
    const int n = 24;
    int a[n];
    int Low = -50;
    int High = 15;
    Create(a, n, Low, High);

    // Перевірка та заміна елементів на від'ємні або непарні
    for (int i = 0; i < n; i++) {
        if (a[i] >= 0 || a[i] % 2 == 0) {
            if (a[i] % 2 == 0) {
                a[i]--;  // Якщо парне, зробимо його непарним
            }
            else {
                a[i] = -1;  // Якщо додатне, зробимо його від'ємним та непарним
            }
        }
    }

    // Виведення масиву a
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }

    return 0;
}

