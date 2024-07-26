#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter a number ";
    cin >> n;

// Top
    // int i = 1;
    // while (i <= n)
    // {
    //     int space = (n - i);
    //     while (space)
    //     {
    //         cout << " ";
    //         space--;
    //     }
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << "*";

    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }


// int i = 1;
//     while (i <= n)
//     {
      
//         int j = 1;
//         while (j <= i)
//         {
//             cout << "*";

//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// end top
// merge top code

  int i = 1;
  int m=0;
    while (i <= n)
    {
        int space = (n - i+1);
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j <= i)
        {
            cout << "*";

            j++;
        }
        int k=1;
        while(k<i){
            cout<< "*";
            k++;
        }
        cout << endl;
        i++;
    }


// end
// Bottom
    //   int i = 0;
    // while (i <= n)
    // {
    //     int j = 1;
    //     int result=(n-i);
    //     while (j <= result)
    //     {
    //         cout << "*";

    //         j++;
    //     }

    //     cout << endl;
    //     i++;
    // }

    // int i = 0;
    // while (i <= n)
    // {
    //     int space=0;
    //     while(space<=i){
    //         cout<<" ";
    //         space++;
    //     }
    //     int j = 1;
    //     int result = (n-i);
    //     while (j <= result)
    //     {
    //         cout << "*";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    //bottom  merge
  
    // int i = 0;
    // while (i <= n)
    // {
    //     int space=0;
    //     while(space<=i){
    //         cout<<" ";
    //         space++;
    //     }
    //     int j = 1;
    //     int result = (n-i);
    //     while (j <= result)
    //     {
    //         cout << "*";
    //         j++;
    //     }
    //     int k=1;
    //          int res = (n-i+1);
    //      while (k <= res)
    //     {
    //         cout << "*";
    //         k++;
    //     }
    //     cout << endl;
    //     i++;
    // }


    ////

//   int i = 0;
//     while (i <= n)
//     {
//         int space=0;
//         while(space<=i){
//             cout<<" ";
//             space++;
//         }
//         int j = 1;
//         int result = (n-i);
//         while (j <= result)
//         {
//             cout << "*";
//             j++;
//         }
//         int k=1;
//          while (k <= result)
//         {
//             cout << "*";
//             k++;
//         }
//         cout << endl;
//         i++;
//     }

}
