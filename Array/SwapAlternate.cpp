#include<iostream>
using namespace std;
void SwapAlternate(int arr[],int n){
    int start =0;
    int end = 1;
    while(end <= n){
        swap(arr[start],arr[end]);
        start +=2;
        end +=2;
    }
}
void printArray(int arr[],int n){
    for(int i=0 ;i<n;i++){
        cout << arr[i]<<" ";
    }
    cout <<endl;
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,0};

    SwapAlternate(arr,10);
    printArray(arr,10);
}