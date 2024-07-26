#include <iostream>
using namespace std;
void isSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j < n)
        {
            if(arr[i] <= arr[j]){
                j++;
            }else{
                int rs = arr[i];
                arr[i]=arr[j];
                arr[j]=rs;
                j++;
            }
        }
    }
       for (int m=0; m < n; m++)
        cout << arr[m] << " ";
}
int main()
{
    int arr[20] = {1,5,3,6,2,8,9,2,6,5,4,1,2,3,6,5,9,41,2,5};
    isSort(arr, 20);
}