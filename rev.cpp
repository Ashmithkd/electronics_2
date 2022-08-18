#include<iostream>
using namespace std;
int main(){
    int n=4;
    int arr[4]={1,2,3,4};
    int newarr[4];
    int temp;
    for(int i=n;i>0;i--){
        temp=arr[i];
        newarr[n-i]=temp;

    }
    for(int i=0;i<n;i++){
        cout<<newarr[i];
    }



}