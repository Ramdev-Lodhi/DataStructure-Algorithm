#include <iostream>
using namespace std;

int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n,int r){
    int numenator= fact(n);
    int denominator = (fact(r) * fact(n-r));
    return numenator/denominator;
}
int main()
{
    int n;
    int r;
    cout << "n=";
    cin >> n;
    cout << "r=";
    cin >> r;

    int answer= nCr(n,r);
    cout <<"Answer : "<<answer;
}