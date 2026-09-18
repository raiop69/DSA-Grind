#include<iostream>
using namespace std;
int main() {
    int arr[5]={100, 200, 300, 400, 500};
    int n = 5;
    for (int i=2;i<n-1;i++){
        arr[i]=arr[i+1];
}
    n--;
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
