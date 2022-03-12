#include <iostream>
#include <windows.h>
using namespace std;

#define Rows 10
#define Cows 10

void input(int x[][Cows], int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << "x[" << i << "][" << j << "] = ";
            cin >> x[i][j];
        }
    }
}

void output(int x[][Cows], int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
}

void randGen(int x[][Cows], int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            x[i][j] = rand();
        }
    }
}


void suMatrix(int x[][Cows], int y[][Cows], int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            x[i][j] = x[i][j] + y[i][j];
        }
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int flag;
    int x[Rows][Cows], y[Rows][Cows];
    int n, m;
    cout << "Ведите через пробел размерность матрицы: " << endl;
    cin >> n >> m;
    while (true) {
        cout << "Как Вы хотите заполнить матрицу ? 0 - самостоятельно, 1 - автоматически" << endl;
        cin >> flag;
        if (flag == 0) {
            input(x, n, m);
            break;
        } else if (flag == 1) {
            randGen(x, n, m);
            break;
        }
    }
    output(x, n, m);



    while (true) {
        cout << "Как Вы хотите заполнить вторую матрицу ? 0 - самостоятельно, 1 - автоматически " << endl;
        cin >> flag;
        if (flag == 0) {
            input(y, n, m);
            break;
        } else if (flag == 1) {
            randGen(y, n, m);
            break;
        }
    }
    output(y, n, m);

    suMatrix(x, y, n, m);
    cout << "Итоговая матрица: " << endl;
    output(x, n, m);

    return 0;
}
