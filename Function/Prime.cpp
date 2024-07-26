#include<iostream>
using namespace std;
bool isPrime(int num){
    for(int i=2; i<=num; i++){
        int result =(num%i==0) ? 0 : 1 ;
        return result;
    }
}
int main(){
    int n;
    cin >> n;
     isPrime(n) ? cout<<"This is prime number ": cout<<"This is not prime number" ;
        
}