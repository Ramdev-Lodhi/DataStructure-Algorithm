#include <iostream>
using namespace std;

void numberprint(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Print Num:" << arr[i] << endl;
    }
}

void nameprint(string arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Print Name:" << arr[i] << endl;
    }
}

int main()
{
    int num[6] = {1, 2, 3, 4, 5, 6};
    string name[5] = {"Ram", "Siya", "Amit", "Prayansh", "Dev"};
    int sizeNUM = sizeof(num) / sizeof(int);
    int sizeNAME = sizeof(name) / sizeof(string);

    numberprint(num, sizeNUM);
    nameprint(name, sizeNAME);

    return 0;
}
