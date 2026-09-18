#include<iostream>
using namespace std;
int main(){
    int arr[6]={100, 200, 300, 400, 500};
    for (int i=5;i>=2;i--) {
    arr[i]=arr[i-1];
    }  
    arr[2] = 50;
    for (int i=0;i<6;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
