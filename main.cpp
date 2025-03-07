#include<iostream>
#include<cmath>
using namespace std;
void pl_pr();
void per_pr();
void diag_pr();
void pl_kr();
void dl_kr();
void pisec_kr();


int main() {
    cout << "Для какой фигуры провести вычисления: " << endl;
    cout << "Прямоугольник(1)" << endl;
    cout << "Окружность(2)" << endl;
    int x;
    cin >> x;
    if (x == 1)
    {
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
    if (x == 2)
    {
        cout << "Чтобы вы хотели вычислить:" << endl;
        cout << "Площадь(1)" << endl;
        cout << "Длину(2)" << endl;
        cout << "Площадь кругового сектора(3)" << endl;
        int x2;
        cin >> x2;
        if (x2 == 1)
        {
            pl_kr();
        }
        else if (x2 == 2)
        {
            dl_kr();
        }
        else if (x2 == 3)
        {
            pisec_kr();
        }
    }
}

void pl_pr() {
    int st1;
    int st2;
    cout << "Введите значение двух сторон прямоугольника:" << endl;
    cin >> st1;
    cin >> st2;
    if (st1 > 0 & st2 > 0)
    {
        cout << "Площадь равна " << st1 * st2 << endl;
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

void dl_kr() {
    int r;
    cout << "Введите радиус оружности: " << endl;
    cin >> r;
    if (r > 0)
    {
        cout << "Длина окружности равна " << 2 * M_PI * r << endl;
    }
    else
    {
        cout << "Радиус не может быть отрицательным" << endl;
    }
}

void pl_kr() {
    int r;
    cout << "Введите радиус оружности: " << endl;
    cin >> r;
    if (r > 0)
    {
        cout << "Площадь окружности равна " << M_PI * pow(r, 2) << endl;
    }
    else
    {
        cout << "Радиус не может быть отрицательным" << endl;
    }
}

void pisec_kr() {
    int r;
    cout << "Введите радиус оружности: " << endl;
    cin >> r;
    int rad;
    cout << "Введите угол кругового сектора: " << endl;
    cin >> rad;
    if (r > 0 & rad > 0)
    {
        cout << "Площадь кругового сектора равна " << (rad/2) * pow(r, 2) << endl;
    }
    else
    {
        cout << "Радиус не может быть отрицательным" << endl;
    }
}



