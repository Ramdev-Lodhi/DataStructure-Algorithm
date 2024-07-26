#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int n;
    char value = 'A';
    cout << "Enter a number ";
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char result = (value-n+j+2);
            cout << result << " ";
            j++;
        }
        cout << endl;
            value++;
        i++;
    }
}