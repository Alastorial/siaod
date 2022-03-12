//вариант 23 Текст вводится как последовательность символов, заканчивающаяся точкой. Определить количество различных пар букв в этом тесте.

#include <iostream>
#include <windows.h>
#include <vector>
using namespace std;

bool check(vector<string> x, string s) {
    for (auto & i : x) {
        if (i == s) return false;
    }
    return true;
}


int main() {
    SetConsoleOutputCP(CP_UTF8);
    string row, s;

    vector<string> x;

    cout << "Введите строку:" << endl;
    cin >> row;
    for (int i = 0; i < row.length() - 1; ++i) {
        if (int(row[i]) >= 97 && int(row[i]) <= 122 && int(row[i + 1]) >= 97 && int(row[i + 1]) <= 122) {
            s = row[i] + row[i + 1];
            if (check(x, s)) {
                x.push_back(s);
            }
        }
    }
    cout << x.size() << endl;




    return 0;
}

/*
#define Rows 10
#define Cows 10

vector<vector<int>> input(vector<vector<int>> x, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << "x[" << i << "][" << j << "] = ";
            cin >> x[i][j];
        }
    }
    return x;
}

void output(vector<vector<int>> x, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
}

vector<vector<int>> randGen(vector<vector<int>> l, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            l[i][j] = rand();
        }
    }
    return l;
}


vector<vector<int>> suMatrix(vector<vector<int>> x, vector<vector<int>> y, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            x[i][j] = x[i][j] + y[i][j];
        }
    }
    return x;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int flag;
    vector<vector<int>> x(Rows, vector<int>(Cows));
    vector<vector<int>> y(Rows, vector<int>(Cows));

    int n, m;
    cout << "Ведите через пробел размерность матрицы: " << endl;
    cin >> n >> m;
    while (true) {
        cout << "Как Вы хотите заполнить матрицу ? 0 - самостоятельно, 1 - автоматически" << endl;
        cin >> flag;
        if (flag == 0) {
            x = input(x, n, m);
            break;
        } else if (flag == 1) {
            x = randGen(x, n, m);
            break;
        }
    }
    output(x, n, m);



    while (true) {
        cout << "Как Вы хотите заполнить вторую матрицу ? 0 - самостоятельно, 1 - автоматически " << endl;
        cin >> flag;
        if (flag == 0) {
            y = input(y, n, m);
            break;
        } else if (flag == 1) {
            y = randGen(y, n, m);
            break;
        }
    }
    output(y, n, m);

    x = suMatrix(x, y, n, m);
    cout << "Итоговая матрица: " << endl;
    output(x, n, m);

    return 0;
}
*/
