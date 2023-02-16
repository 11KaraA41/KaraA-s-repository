#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    vector<int> vec = { 1, 45, 54, 71, 76, 12, 65,657,65,64565, 6, 64, 63, 43,6234, 56 };

    cout << "Все элементы : ";

    for (int i = 0; i < vec.size(); i++)

        cout << vec[i] << " ";

    cout << endl;
    cout << "\nМаксимальный элемент = " << *max_element(vec.begin(), vec.end());
    for (int b = 0; b < 5; b++)
    {
        cout << endl;
    }

    return 0;
}
