#include <iostream>
using namespace std;

void duplicate(int arr[], int n) {
    int arrD[100] = {0}; 
    int k = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                bool isDuplicate = false;
                for (int l = 0; l < k; l++) {
                    if (arrD[l] == arr[i]) {
                        isDuplicate = true;
                        break;
                    }
                }

                if (!isDuplicate) {
                    arrD[k++] = arr[i];
                    cout  << arr[i] << " " <<endl;
                }
                break; 
            }
        }
    }
    cout << endl;
}
void unique(int arr[], int n) {
    int arrD[100] = {0}; 
    int k = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i] != arr[j]) {
                bool isDuplicate = false;
                for (int l = 0; l < k; l++) {
                    if (arrD[l] == arr[i]) {
                        isDuplicate = true;
                        break;
                    }
                }

                if (!isDuplicate) {
                    arrD[k++] = arr[i];
                    cout <<" Unique Number" << arr[i] << " ";
                }
                break; 
            }
        }
    }
    cout << endl;
}
int main() {
    int arr[10] = {1, 2, 2, 3, 3, 5, 1, 3, 7,5};
    duplicate(arr, 10);
    unique(arr, 10);
    return 0;
}
