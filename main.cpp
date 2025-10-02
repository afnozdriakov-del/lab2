#include <iostream>
#include <cmath>     // для math функцій: sin, log, tan, fabs, cbrt
using namespace std;

int main()
{
    // Завдання 1. Integer3
    cout << "Завдання 1. Integer3" << endl;

    // Введення розміру файлу в Мбайтах
    int fileSizeMB;
    cout << "Введіть розмір файлу у Мбайтах: ";
    cin >> fileSizeMB;

    // 1 Гбайт = 1024 Мбайт
    const int MB_IN_GB = 1024;

    // Знаходимо кількість повних Гбайт (цілочисельне ділення)
    int fullGB = fileSizeMB / MB_IN_GB;

    // Знаходимо кількість Мбайт, що не вистачає до наступного Гбайту
    int mbToNextGB = MB_IN_GB - (fileSizeMB % MB_IN_GB);
    
     // Вивід результатів
    cout << "Кількість повних Гбайт: " << fullGB << endl;
    cout << "Мбайт не вистачає до наступного повного Гбайту: " << mbToNextGB << endl;
    
    cout << "..." << endl;
    cout << " " << endl;
    
    cout << "Друга задача..." << endl;
    
    // Завдання Boolean18
    cout << "Завдання Boolean18" << endl;

    // Введення трьох цілих чисел
    int A, B, C;
    cout << "Введіть три цілих числа A, B, C: ";
    cin >> A >> B >> C;
    
    // Логічне висловлювання:
    // "Серед трьох чисел є хоча б одна пара співпадаючих"
    bool result = (A == B) || (A == C) || (B == C);
    
    cout <<"Результат:"<< result << endl;
  
    cout << "..." << endl;
    cout << " " << endl;
    
    cout << "Третя задача..." << endl;
    cout << "Завдання 27. Вираз" << endl;
   
    // Введення x
    double x;
    cout << "Введіть значення x: ";
    cin >> x;
    
    
    // Константи
    const double LOG5_DENOM = log(5.0);
    const double EPS = 1e-12;

    // Аргументи логарифмів
    double arg1 = fabs(x - 2.5);     
    double arg2 = fabs(x * x - 2.5); 
    
    // Чисельник
    double Top= tan(fabs(3*pow(x,3) + 6*x - 31.15)) + LOG5_DENOM*(fabs(x-2.5));
    // знаменник
    double bot= pow(sin(pow(x,2)+ 1/4*LOG5_DENOM*(fabs(pow(x,2)-2.5))),2);
    // Розрахунок у
    double y = Top/bot;
    cout << "Введіть значення y: " << y << endl;
}
