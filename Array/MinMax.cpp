#include <iostream>
#include <climits> 
using namespace std;

void getMin(int arr[], int n) {
    int minValue = INT_MAX;
    for (int i = 0; i < n; i++) {
      
            minValue = min(minValue,arr[i]);
        
    }
    cout << "Minimum value: " << minValue << endl;
}

void getMax(int arr[], int n) {
    int maxVlaue = INT_MIN;
    for (int i = 0; i < n; i++) {
        maxVlaue=max(maxVlaue,arr[i]);
        // if (arr[i] > max) {
        //     max = arr[i];
        // }
    }
    cout << "Maximum value: " << maxVlaue << endl;
}

int main() {
    int size;
    cout << "Total Values: ";
    cin >> size;

    if (size <= 0 || size > 1000) {
        cout << "Invalid size. Please enter a value between 1 and 1000." << endl;
        return 1;
    }

    int arr[1000];
    cout << "Enter the values:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    getMin(arr, size);
    getMax(arr, size);

    return 0;
}
