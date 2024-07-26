#include <iostream>
using namespace std;

int nthTermOfAP(int a, int d, int n) {
    return a + (n - 1) * d;
}

int main() {
    int a, d, n;
    cout << "Enter the first term (a): ";
    cin >> a;
    cout << "Enter the common difference (d): ";
    cin >> d;
    cout << "Enter the term number (n): ";
    cin >> n;
    int nthTerm = nthTermOfAP(a, d, n);
    cout << "The " << n << "th term of the AP series is: " << nthTerm << endl;
    return 0;
}
