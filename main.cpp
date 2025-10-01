
#include <iostream>
#include <cmath>     // для math функцій: sin, log, tan, fabs, cbrt
#include <limits>    // для numeric_limits (якщо треба)
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

    // Якщо файл ділиться націло, то додаткових Мбайт не потрібно
    if (fileSizeMB % MB_IN_GB == 0) {
        mbToNextGB = 0;
    }

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

    // Вивід результату
    cout << "Результат перевірки: ";
    if (result) {
        cout << "Істинне (є хоча б одна пара однакових чисел)." << endl;
    } else {
        cout << "Хибне (усі три числа різні)." << endl;
    }

    
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

    if (arg1 <= 0.0) {
        cout << "Помилка: log5(|x - 2.5|) не визначений." << endl;
        return 0;
    }
    if (arg2 <= 0.0) {
        cout << "Помилка: log5(|x^2 - 2.5|) не визначений." << endl;
        return 0;
    }

    // Логарифми
    double log5_arg1 = log(arg1) / LOG5_DENOM;
    double log5_arg2 = log(arg2) / LOG5_DENOM;

    // Чисельник без fabs
    double poly = 3.0 * x * x * x + 6.0 * x - 31.15;
    double tan_arg = poly + log5_arg1;
    double numerator = tan(tan_arg);

    // Знаменник без fabs
    double sin_arg = x * x + 0.25 * log5_arg2;
    double sin_val = sin(sin_arg);
    double denominator = cbrt(sin_val);

    if (fabs(denominator) <= EPS) {
        cout << "Помилка: знаменник занадто малий." << endl;
        return 0;
    }

    // Остаточний результат
    double y = numerator / denominator;

    cout << "Результат: y = " << y << endl;

    return 0;  
}
