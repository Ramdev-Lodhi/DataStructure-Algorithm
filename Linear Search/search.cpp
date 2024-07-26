#include<iostream>
using namespace std;
bool search(int arr[],int n,int key){
   for(int i=0; i < n; i++){
    // cout << "Array : " << arr[i] <<endl;;
    return (arr[i]==key) ? 0 : 1 ;
   }

}
int main(){
    int arr[10]={2,-5,8,10,89,32,25,1,8,7};
int key;
cout << "Enter the element to seach for  " <<endl;
cin >> key;
       int result= search(arr,10,key);
       (result) ? cout << "This Element Present in Array" : cout << "This Element Absent in Array";

}