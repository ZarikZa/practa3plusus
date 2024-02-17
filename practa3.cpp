// practa3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    const int dlina = 3;
    double sum{};
    const int shirina = 5;
    double matrix[dlina][shirina];
    int colvo{};
    double cred;
    cout << "Вводите 15 чисел: ";
    for (int i = 0; i < dlina; i++)
    {
        for (int j = 0; j < shirina; j++)
        {
            cin >> matrix[i][j];
            sum += matrix[i][j];
            colvo++;
        }
    }
    cred = sum / colvo;
    cout << "Среднее арифметическое матрицы: ";
    cout << cred;
}