#include<iostream>
using namespace std;
int main(){
	int arr[]={27,35,49,21,515,9,6,8,120};
    int start = 0;
    int end = 8;
    for(int i=0;i<9;i++){
    	while(start<end){
		swap(arr[start],arr[end]);
    	start++;
    	end--;}
		}
    
 for(int i=0;i<9;i++){
 	cout<<arr[i]<<" ";
 }
}
