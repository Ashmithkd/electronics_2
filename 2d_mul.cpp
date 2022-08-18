#include<iostream>
using namespace std;
int main(){
    int arr1[2][2]={{1,2},{3,4}};
    int arr2[2][1]={{1},{3}};
    int arrnew[2][1]={0,0};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            arrnew[i][j]+=arr1[i][j]*arr2[j][i];
            }
        }
       cout<<arrnew[0][0];
    
}