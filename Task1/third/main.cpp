#include <iostream>
#include <windows.h>
#include <vector>

using namespace std;



vector<long> input(vector<long> a, int n) {
    cout << "Введите элементы масива (" << n << ")" << endl;
    long buffer = 0;
    for (int i = 0; i < n; ++i) {
        cin >> buffer;
        a.push_back(buffer);
    }
    return a;
}

void output(vector<long> a, string phrase)
{
    cout << phrase << endl;
    for (int i = 0; i < a.size(); i++)
    {
        //cout << vec[i] << endl;
        cout << "vector[" << i << "]=" << a[i] << endl;
    }
}


vector<long> paste(vector<long> a) {
    int num, count, flag = 0;
    cout << "Введите элемент и номер позиции, на которую хотели бы его вставить" << endl;
    cin >> num >> count;
    vector<long> b;
    for (int i = 0; i < a.size() + 1;) {
        if (i == count) {
            b.push_back(num);
            flag = 1;
            ++i;
        } else {
            b.push_back(a[i - flag]);
            ++i;
        }
    }
    return b;
}

int firstDigit(int n)
{
    while (n > 10) {
        n /= 10;
    }
    return n;
}


void checkSame(vector<long> a, int n) {
    int ans;
    for (int i = 0; i < n; ++i) {
        if (a[i] % 10 == firstDigit(a[i])) ans = i;
    }
    cout << "Последнее вхождение в массив " << a[ans] << endl;
}

vector<long> delete5(vector<long> a) {
    vector<long> b;

    for (long & i : a) {
        if (i % 5 != 0) {
            b.push_back(i);
        }
    }


    return b;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    // Получаем размер массива
    int n;
    cout << "Введите длину вектора" << endl;
    cin >> n;

    // Создаем вектор
    vector<long> arr;


    arr = input(arr, n);
    output(arr, "Исходный вектор: ");
    arr = paste(arr);
    output(arr, "Новый вектор после добавления: ");

    checkSame(arr, n);

    arr = delete5(arr);
    output(arr, "Новый вектор после чистки: ");
    cout << "liza_DrugDiller" << endl;
    return 0;
}

