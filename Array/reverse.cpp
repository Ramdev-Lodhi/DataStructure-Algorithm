#include <iostream>
using namespace std;
void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[6] = {5, 6, 8, 10, 23, 54};
    int arr2[10] = {5, 6, 8, 10, 23, 54, 0, 2, 4, 8};

    reverse(arr, 6);
    reverse(arr2, 10);

    printArray(arr,6);
    printArray(arr2,10);
}