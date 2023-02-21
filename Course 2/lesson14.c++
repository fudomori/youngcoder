#include <iostream>

using namespace std;

int main() {
  int age;

  cout <<"Введите Ваш Возраст:" <<endl;
  cin >>age; //Вводим 25 и нажимаем Enter

  string FIO;
  cout <<"Введите Фамилию Имя и Отчество:" <<endl;
  getline(cin, FIO); //Нам не дают даже возможность что-то ввести!

  cout <<"Здравствуйте, " <<FIO <<"!" <<endl;
  // Получаем: Здравствуйте, !

/* В строку FIO попадает пустая строка! Почему? Дело в том, условный курсор ввода располагается в строке, в которой мы написали значение возраста (25) и располагается сразу после числа 25. Поэтому от этого места до конца строки (до символа перевода строки) располагается пустая строка, которая попадает в переменную FIO, на чем работа getline заканчивается. Тут нет никакой ошибки – но ведь это не то, что нам нужно. Поэтому введем конструкцию cin >>ws; перед выполнением getline. Эта конструкция пропустит все пробельные символы, в том числе переводы строк и ввод начнется с новой строки (побочным эффектом будет то, что введенная строка с ФИО никогда не будет начинаться с пробела). */

  int age;

  cout <<"Введите Ваш Возраст:" <<endl;
  cin >>age; //Вводим 25 и нажимаем Enter

  string FIO;
  cout <<"Введите Фамилию Имя и Отчество:" <<endl;
  cin >>ws; //решили проблему с пустой строке при вводе
  getline(cin, FIO); //Вводим: Иванов Иван Иванович

  cout <<"Здравствуйте, " <<FIO <<"!" <<endl;
  // Получаем: Здравствуйте, Иванов Иван Иванович!
}
