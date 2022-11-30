//Дан текстовый файл с именем e.txt, в первой строке которого записано единственное число N, а во второй строке последовательность из N целых
//чисел, разделенных пробелами. Определить количество чисел равных максимальному среди чисел данной последовательности.
#include<iostream>
#include <string>
#include <fstream>
using namespace std;

void main()
{
    ifstream file("e.txt");
    int n, count = 1;
    file >> n;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        int numb;
        file >> numb;
        numb > max ? count = 0 : max = max;
        numb > max ? max = numb : max = max;
        max == numb ? count += 1 : count = count;
    }
    file.close();
    cout << count;
}