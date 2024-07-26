#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int n;
    char value='A';
    char ABCD='A';
    int count=1;
    cout << "enter a number";
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            // cout<< value<<" |";
            // cout<< ABCD<<" - ";
            cout << "*"<<" ";
            // cout << count<<" _ ";
            ABCD++;
            j++;
        }
        cout<<endl;
            value++;
            count++;
        i++;
    }
    


}