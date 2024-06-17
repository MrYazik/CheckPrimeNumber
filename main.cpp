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

    CheckPrimeNumber(inputNumber);
}

void CheckPrimeNumber(unsigned number)
{
    if (number == 1)
    {
        cout << endl; // Отступ
        cout << "Число: " << number << " ни простое и не составное" << endl;
    }
    else if (number % 2 == 0)
    {  
        cout << endl; // Отступ
        cout << "Число: " << number << " не является простым" << endl;
    }
    else if (number % 2 != 0)
    {
        cout << endl; // Отступ
        cout << "Число: " << number << " является простым" << endl;
    }
    else 
    {
        cout << endl; // Отступ
        cout << "Вы ввели что-либо неправильно." << endl;
    }
}