#include<iostream>
using namespace std;
int main(){
    int arr[2][4]={{1,2,3,4}, {5,6,7,8}};
    int newarr[50][50];
    int tem1;
    int tem2;
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            newarr[j][i]=arr[i][j];
        }
    }
    cout<<newarr[3][1];
    return 0;
}