#include<iostream>
using namespace std;
int main(){
	int arr[] = {2,7,11,13};
	int target = 9;
	int i=0;
	int j=3;
   	while(i<j){
   		int ps =arr[i]+arr[j];
   		if(ps>target){
   			j--;
		   }
   		else if(ps<target){
   			i++;
		   }
   		else {
			cout<<arr[i]<<" "<<arr[j];
		   break;
		   }
   		
	   }
	
}
