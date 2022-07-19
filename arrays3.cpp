// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
// A subarray is a contiguous part of an array.

//solving using kadane's algorithm

#include <iostream>

using namespace std;

int subarray(int arr[],int n)
{	
	int cs =0,  ms = 0;

	for (int i = 0; i < n; ++i)
	{
		cs = cs + arr[i];
		if(cs < 0){
			cs = 0;
		}
		ms = max(ms, cs);
	}
	return ms;
}

int main(){
	int nums[] = {-2,1,-3,4,-1,2,1,-5,4};
	int n = sizeof(nums)/sizeof(nums[0]);

	int sum = subarray(nums, n);
	cout << sum;
	return 0;
}
for (std::vector<>::iterator i = .begin(); i != .end(); ++i)
{
	
}