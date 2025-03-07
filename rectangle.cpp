#include<iostream>
#include<cmath>
using namespace std;
void pl_pr();
void per_pr();
void diag_pr();
int main() {
    cout << "Чтобы вы хотели вычислить:" << endl;
    cout << "Площадь(1)" << endl;
    cout << "Периметр(2)" << endl;
    cout << "Длину диагонали(3)" << endl;
    int x2;
    cin >> x2;
    if (x2 == 1)
    {
        pl_pr();
    }
    else if (x2 == 2)
    {
        per_pr();
    }
    else if (x2 == 3)
    {
        diag_pr();
    }
}
void pl_pr() {
    int st1;
    int st2;
    cout << "Введите значение двух сторон прямоугольника:" << endl; //комментарий
    cin >> st1;
    cin >> st2;
    if (st1 > 0 & st2 > 0)
    {
        cout << "Площадь равна " << st1 * st2 << endl; // комментарий 2
    }
    else
    {
        cout << "Сторона фигуры не может быть отрицательной" << endl;
    }
}

void per_pr() {
    int st1;
    int st2;
    cout << "Введите значение двух сторон прямоугольника:" << endl;
    cin >> st1;
    cin >> st2;
    if (st1 > 0 || st2 > 0)
    {
        cout << "Периметр равен " << (st1 + st2) * 2 << endl;
    }
    else
    {
        cout << "Сторона фигуры не может быть отрицательной" << endl;
    }
}

void diag_pr() {
    int st1;
    int st2;
    cout << "Введите значение двух сторон прямоугольника:" << endl;
    cin >> st1;
    cin >> st2;
    if (st1 > 0 || st2 > 0)
    {
        cout << "Длина диагонали равна " << sqrt((pow(st1, 2) + pow(st2, 2))) << endl;
    }
    else
    {
        cout << "Сторона фигуры не может быть отрицательной" << endl;
    }
}
