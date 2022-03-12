#include <iostream>
#include <windows.h>

using namespace std;



void input(long a[], int n) {
    cout << "Введите элементы масива (" << n << ")" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
}

void output(long a[], int n, string phrase)
{
    cout << phrase << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "array[" << i << "]=" << a[i] << endl;
    }
}


void paste(long a[], int* n) {
    int num, count;
    cout << "Введите элемент и номер позиции, на которую хотели бы его вставить" << endl;
    cin >> num >> count;
    *n += 1;

    for (int i = *n; i >= count; --i) {
        if (i == count) {
            a[i + 1] = a[i];
            a[i] = num;
        } else {
            a[i + 1] = a[i];
        }
    }




}

int firstDigit(int n)
{
    while (n > 10) {
        n /= 10;
    }
    return n;
}


void checkSame(long a[], int n) {
    int ans;
    for (int i = 0; i < n; ++i) {
        if (a[i] % 10 == firstDigit(a[i])) ans = i;
    }
    cout << "Последнее вхождение в массив " << a[ans] << endl;
}

void delete5(long a[], int* n) {

    for (int i = 0; i < *n;) {
        if (a[i] % 5 == 0) {
            for (int j = i; j < *n; ++j) {
                a[j] = a[j + 1];
            }
            *n -= 1;
        } else {
            ++i;
        }
    }


    output(a, *n, "Новый массив: ");
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    // Получаем размер массива
    int n;
    cout << "Введите длину массива" << endl;
    cin >> n;

    long *arr = new long[100];


    input(arr, n);
    output(arr, n, "Исходный масив: ");
    paste(arr, &n);
    output(arr, n, "Новый массив: ");

    checkSame(arr, n);

    delete5(arr, &n);

    return 0;
}