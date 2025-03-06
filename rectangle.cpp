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

