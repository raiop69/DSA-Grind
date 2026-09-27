#include<iostream>
using namespace std;
int main(){
	int arr[] = {2,7,11,13};
	int target = 24;
	int sum=0;
	for(int i=0;i<4;i++){
		for(int j=i+1;j<4;j++){
			if(arr[i]+arr[j]==target){
				cout<<arr[i]<<" and "<<arr[j];
			}
		}
		
	}
	
}
