#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value :";
    cin >> n;
    int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     int value = i;
    //     while (j <= i)
    //     {
    //         cout <<value;
    //         value++;
    //         j++;

    //     }
    //     cout<<endl;
    //     i++;

    // }

    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<(i+j-1);
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << (i - j + 1);
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         char ch= ('A'+j-1);
    //         cout << ch;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    // char ch= 'A';
    //  while (i <= n)
    // {
    //     int j = 1;
        
    //     while (j <= n)
    //     {
    //         cout << ch;
    //         ch++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    //  while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         char ch= ('A'+i+j-2);
    //         cout << ch;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    //  while (i <= n)
    // {
    //     int j = 1;
    //     char ch= ('A'+i+j-2);
    //     while (j <= i)
    //     {
    //         cout << ch;
    //         ch++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

      while (i <= n)
    {
        int j = 1;
        char ch= ('A'+n-i);
        while (j <= i)
        {
            cout << ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}