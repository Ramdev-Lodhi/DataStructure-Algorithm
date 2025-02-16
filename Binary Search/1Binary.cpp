#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start+end) /2;
    }
    return -1;
}
int main()
{
    int arr[5] = {2, 4, 6, 7, 10};
    int key;
    cout << "Which find the  key : ";
    cin >> key;
    int result= BinarySearch(arr,5,key);
    cout << "Key Index is :" << result;

    return 0;
}