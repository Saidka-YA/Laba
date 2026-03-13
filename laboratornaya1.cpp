#include <iostream>
#include <cmath>
#include <numbers>
using namespace std;
#define PI 3.14159265358979323846
void options()
{
    cout << "\nВыберите действие:\n";
    cout << "1. Посчитать длину окружности\n";
    cout << "2. Посчитать площадь круга\n";
    cout << "3. Посчитать площадь кругового сектора\n";
}

double circumference()
{
    cout << "\nКакую формулу будем использовать?\n";
    cout << "1. Через радиус: 2 * p * r\n";
    cout << "2. Через диаметр: p * D\n";
    int choice;
    double length = 0;
    while (!(cin >> choice) || choice != 1 && choice != 2)
    {
        cout << "\nОшибка: Введите 1 или 2!\n";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    if (choice == 1)
    {
        double radius;
        cout << "Введите радиус: ";
        while (!(cin >> radius) || radius <= 0)
        {
            cout << "Ошибка: необходимо ввести положительное число\n";
            cin.clear();
            cin.ignore(1000, '\n');
        }
        length = 2 * PI * radius;
    }
    else if (choice == 2)
    {
        cout << "Введите диаметр: ";
        double diameter;
        while (!(cin >> diameter) ||  diameter <= 0);
        {
            cout << "Ошибка: необходимо ввести положительное число\n";
            cin.clear();
            cin.ignore(1000, '\n');
        }
        length = PI * diameter;
    }
    else 
        cout << "Ошибка";
    return length;
}

double squareCirle()
{
    cout << "Какую формулу будем использовать?\n";
    cout << "1. Через радиус: p * r^2\n";
    cout << "2. Через диаметр: (p * d^2)/4\n";
    cout << "3. Через длину окружности: C^2 / (4*p)\n";
    int choice;
    double square = 0;
    while (!(cin >> choice) || choice != 1 && choice != 2 && choice != 3)
    {
        cout << "\nОшибка: Введите 1 или 2!\n";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    if (choice == 1)
    {
        double radius;
        cout << "Введите радиус: ";
        while (!(cin >> radius) || radius <= 0)
        {
            cout << "Ошибка: Необходимо ввести положительное число!\n";
            cin.clear();
            cin.ignore(1000, '\n');
        }
        square = PI * pow(radius, 2);
    }
    else if (choice == 2)
    {
        double diameter;
        cout << "Введите диаметр: ";
        while (!(cin >> diameter) || diameter <= 0)
        {
            cout << "Ошибка: введите положительное число!\n";
            cin.clear();
            cin.ignore('\n');
        }
        square = (PI * pow(diameter, 2)) / 4;
    }
    else if (choice == 3)
    {
        
    }
    
    return square;

}

