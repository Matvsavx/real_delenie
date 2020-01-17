#include <iostream>
using namespace std;

int delenie(string a1, string b1)
{
    if ( a1 == "")
        throw "Вы не ввели числитель";
    else
    if (b1 == "")
        throw "Вы не ввели знаменатель";
    else
    if (b1 == "0")
        throw "Знаменатель не может быть равным нулю";


    int a2, b2;
    a2 = stoi(a1);
    b2 = stoi(b1);
    return a2/b2;
}