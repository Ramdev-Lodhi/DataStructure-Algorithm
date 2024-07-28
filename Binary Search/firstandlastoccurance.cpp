#include <iostream>
using namespace std;

pair<int, int> findFirstAndLastOccurrence(int arr[], int n, int key) {
    int s = 0, e = n - 1;
    int first = -1, last = -1;
    
    // Find first occurrence
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key) {
            first = mid;
            e = mid - 1;
        } else if (arr[mid] < key) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    
    s = 0, e = n - 1;
    
    // Find last occurrence
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key) {
            last = mid;
            s = mid + 1;
        } else if (arr[mid] < key) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    
    return {first, last};
}

int main() {
    int arr[7] = {0, 1, 2, 2, 2, 2, 4};
    pair<int, int> ans = findFirstAndLastOccurrence(arr, 7, 2);
    cout << "First Occurrence: " << ans.first << "\n";
    cout << "Last Occurrence: " << ans.second << "\n";
    return 0;
}
