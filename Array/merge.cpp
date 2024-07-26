#include <iostream>
using namespace std;
int *isMerge(int arr1[], int arr2[], int n1, int n2)
{
    int* arr3 = new int [n1 + n2];
    int m = 0;
    for (int i = 0; i < n1 + n2; i++)
    {
        if (i > n1 - 1)
        {   
            arr3[i] = arr2[m];
            m++;
        }
        else
        {
            arr3[i] = arr1[i];
        }
    }
    return arr3;

}
void isSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j < n)
        {
            if (arr[i] <= arr[j])
            {
                j++;
            }
            else
            {
                int res = arr[i];
                arr[i] = arr[j];
                arr[j] = res;
                j++;
            }
        }
    }
        cout <<"sort :" <<" ";
    for (int m=0; m < n; m++)
    {
        cout <<arr[m] << " ";
    }
    cout<<endl;
}
int main()
{
    int arr1[4] = {1, 4, 5, 6};
    int arr2[2] = {2, 3};

    int n = 4 + 2;
    int *arr = isMerge(arr1, arr2, 4, 2);
  
        cout << "Merge arr1 and arr2 :" << " ";
        for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    cout<<endl;
    isSort(arr, n);

   
}