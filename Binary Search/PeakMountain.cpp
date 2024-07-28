#include <iostream>

using namespace std;
int peakIndexInMountainArray(int arr[],int n)
{
 
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        (arr[mid] < arr[mid + 1]) ? s = mid + 1 : e = mid;
        mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    int arr[6] = {1, 2, 3, 6, 5, 0};
    cout<<"Mountain Peak Index :"<<peakIndexInMountainArray(arr,6);
}
