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
        cout << "Площадь кругового сектора равна " << (rad / 2) * pow(r, 2) << endl;
    }
    else
    {
        cout << "Радиус не может быть отрицательным" << endl;
    }
}