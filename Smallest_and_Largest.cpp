#include<iostream>
using namespace std;
int main(){
	int arr[]={27,35,49,21,515,9,6,8,120};
	int smallest = arr[0];
	int largest = arr[1];
	for(int i=0;i<9;i++){
	if(arr[i]<smallest){
		smallest= arr[i];
	}
	if(arr[i]>largest){
		largest = arr[i];
	}
	}
	cout<<"Smallest: "<<smallest<<endl;
	cout<<"Largest: "<<largest;
}
