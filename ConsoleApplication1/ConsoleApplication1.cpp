#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int N;
int k;
int main() 
{
    setlocale(LC_ALL,"Russian");
    cout << "Количество чисел в последовательности:";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cout << i+1<< " ";
    }
    cout << endl;
    cout << "Удалить элементы кратные:";
    cin >> k;
    cout << endl;
    cout << "результат:";

       for (int i = 0; i < N; i++)
        {
            if(i % k)
            {
                cout << i << " ";
            }
            else
            {
            cout << "";
            }

        }
}