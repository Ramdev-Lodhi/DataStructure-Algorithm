#include<iostream>
using namespace std;
int main(){
int a;
int b;
cout << "Enter a vlaue a:";
cin >> a;
cout << "Enter a vlaue b:";
cin >> b;
char op;
cout <<"Enter Operation perform : ";
cin >> op;

switch(op){
    case '+': cout << (a+b) <<endl;
    break;
    case '-': cout << (a-b) <<endl;
    break;
    case '*': cout << (a*b) <<endl;
    break;
    case '/': cout << (a/b) <<endl;
    break;
    case '%': cout << (a%b) <<endl;
    break;

}
}