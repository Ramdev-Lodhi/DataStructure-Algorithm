#include <iostream>
using namespace std;
int pivotIndex(int arr[], int n)
{
    int ans = -1;
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
     int totalSum = 0;
    for (int i = 0; i < n; ++i) {
        totalSum += arr[i];
    }

    int leftSum = 0;
    for (int i = 0; i < n; ++i) {
        int rightSum = totalSum - leftSum - arr[i];
        if (leftSum == rightSum) {
            return i;
        }
        leftSum += arr[i];
    }

    return -1;
}
int main()
{
    int arr[6] = {1, 7, 3, 6, 5, 6};
    cout << "Pivot Index Given Array : " << pivotIndex(arr, 6);
}