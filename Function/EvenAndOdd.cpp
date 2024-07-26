#include<iostream>
using namespace std;
bool isEven(int num){
    int result =(num&1) ? 0 :  1 ;
    return result;
}
int main(){
    int a ;
    cin >> a;
  isEven(a) ? cout<<"This is even number " : cout<< "This is odd number";
}