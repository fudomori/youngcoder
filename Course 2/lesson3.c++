/* Калькулятор для вычисления 2 чисел */

#include <iostream>
#include <cmath>     //заголовочный файл для математических функций

using namespace std; 

int main()    
{                           
    double x; 
    cout << "Введите аргумент функций (вещественное число):" << endl; 
    cin >> x;                                                         
    
    cout << "Квадрат           " << x << " = " << x*x      << endl;  //Печатаем квадрат x
    cout << "Куб               " << x << " = " << pow(x,3) << endl;  //Печатаем куб x
    cout << "Квадратный корень " << x << " = " << sqrt(x)  << endl;  //Печатаем квадратный корень x
    cout << "Экспонента        " << x << " = " << exp(x)   << endl;  //Печатаем экспоненту x
    cout << "Натурал. логарифм " << x << " = " << log(x)   << endl;  //Печатаем натуральный логарифм x
    cout << "Десятич. логарифм " << x << " = " << log10(x) << endl;  //Печатаем десятичный логарифм x    
    cout << "Синус             " << x << " = " << sin(x)   << endl;  //Печатаем синус x
    cout << "Косинус           " << x << " = " << cos(x)   << endl;  //Печатаем косинус x
    cout << "Тангенс           " << x << " = " << tan(x)   << endl;  //Печатаем тангенс x
    cout << "Арксинус          " << x << " = " << asin(x)  << endl;  //Печатаем арксинус x
    cout << "Арккосинус        " << x << " = " << acos(x)  << endl;  //Печатаем арккосинус x
    cout << "Арктангенс        " << x << " = " << atan(x)  << endl;  //Печатаем арктангенс x

    return 0;     
}
