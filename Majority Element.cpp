#include<iostream>
using namespace std;
int main(){
	int arr[] = {1,1,2,2,2,2,2,5};
      int f=1, ans= arr[0];
      for(int i=1;i<8;i++)
{
	if(arr[i]==arr[i-1]){
		f++;
	}else {
		f=1;
		ans= arr[i];
	}
	   if(f>4){
   	cout<<ans<<" Frequrency: "<<f;
   }
}

} 
