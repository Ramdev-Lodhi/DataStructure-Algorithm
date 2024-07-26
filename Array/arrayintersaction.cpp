#include <iostream>
using namespace std;

int* intersection(int arr1[], int arr2[], int n, int m, int& resultSize) {
    // Assuming the maximum possible size of the result array is min(n, m)
    int* ans = new int[min(n, m)];
    resultSize = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr1[i] == arr2[j]) {
                // Check if the element is already in the result
                bool found = false;
                for (int k = 0; k < resultSize; k++) {
                    if (ans[k] == arr1[i]) {
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    ans[resultSize++] = arr1[i];
                }
                break; // No need to check further for arr1[i]
            }
        }
    }
    
    return ans;
}

int main() {
    int arr1[5] = {1, 2, 3, 5, 4};
    int arr2[2] = {5, 4};
    int resultSize = 0;

    int* ans = intersection(arr1, arr2, 5, 2, resultSize);
    
    for (int i = 0; i < resultSize; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    delete[] ans; // Free the allocated memory
    return 0;
}
