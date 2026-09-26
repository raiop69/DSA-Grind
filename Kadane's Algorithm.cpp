#include<iostream>
using namespace std; 
int main()
{   
	int max_sum;

	int arr[] = {1,2,-3,-4,-5};
	
			int cs=0;
		for(int end=0;end<5;end++)
		{
		    cs+=arr[end];
			max_sum=max(cs,max_sum);
			if(cs<0)
			{cs = 0;
}
}
cout<<max_sum;
}
