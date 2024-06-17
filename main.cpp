#include <iostream>

// namespaces

using std::cout;
using std::cin;
using std::endl;

void CheckPrimeNumber(unsigned); // Прототип функции CheckPrimeNumber

int main()
{
    unsigned inputNumber { }; 

    cout << endl; // Отступ
    cout << "Введите число для проверки простое ли оно: ";
    cin >> inputNumber;

    CheckPrimeNumber(inputNumber); // Проверяем вводимое число на простоту
}

void CheckPrimeNumber(unsigned number)
{
    if (number == 1) // Число 1 не простое ни стоставное
    {
        cout << endl; // Отступ
        cout << "Число: " << number << " ни простое и не составное" << endl;
    }
    else if (number % 2 == 0) // Если число делится на 2 без остатка, оно не простое (лично по моим наблюдениям)
    {  
        cout << endl; // Отступ
        cout << "Число: " << number << " не является простым" << endl;
    }
    else if (number % 2 != 0) // Если число не делится на 2, оно простое (лично по моим наблюдениям)
    {
        cout << endl; // Отступ
        cout << "Число: " << number << " является простым" << endl;
    }
    else // Если число и не простое и не составное
    {
        cout << endl; // Отступ
        cout << "Вы ввели что-либо неправильно." << endl;
    }
}