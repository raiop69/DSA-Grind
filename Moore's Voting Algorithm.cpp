#include<iostream>
using namespace std;
int main(){
	int arr[] = {1,1,2,2,2,2,2,5};
    int f=0;
	int ans = 0;
	for(int i=0;i<8;i++){
		if(f==0){
			ans = arr[i];
		}
		if(ans == arr[i]){
			f++;
		}
		else  f--;
	}
    cout<<ans;

} 
