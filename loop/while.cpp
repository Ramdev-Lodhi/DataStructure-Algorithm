
#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n;
    cout << "Enter a Number ";
    cin >> n;
    //     while (i <= n)
    //     {
    //         int j = 1;
    //         while (j <= n)
    //         {

    //             cout << j <<" ";
    //             j++;
    //         }
    // cout << endl;
    //         i++;
    //     }

        int count = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
             cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }




}
