#include <iostream>
using namespace std;
int main()
{
    
    // Q1.
    // int a, b=1;
    // a=10;
    // if (++a){
    //     cout<<b;
    // }else{
    //     cout<<++b;
    // }
    // Q2
    // int a=1;
    // int b=2;
    // if (a-- >0 && ++b >2){
    //     cout<<"Inside if";

    // }else{
    //     cout<<"inside else";
    // }
    for(int i=0; i<=15; i+=2){
        cout<<i;
        if(i&1){
            continue;
        }
        i++;
    }
}