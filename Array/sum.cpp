#include <iostream>
using namespace std;
void sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "Total Sum:" << sum << endl;
}
int main()
{
    int n;
    cout << "Enter the total number of sum : " ;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1};
    sum(arr, n);
}