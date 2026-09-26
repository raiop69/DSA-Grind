#include<iostream>
using namespace std; 
int main()
{   
	int max_sum=0;

	int arr[] = {1,2,3,4,5};
	for(int start=0;start<5;start++){
			int cs=0;
		for(int end=start;end<5;end++)
		{
		    cs+=arr[end];
			max_sum=max(cs,max_sum);
}
}
cout<<max_sum;
}
