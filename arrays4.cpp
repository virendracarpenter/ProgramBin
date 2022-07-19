// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool checkDuplicate(vector<int>& nums){

	sort(nums.begin(), nums.end());
	for( int i = 1; i < nums.size(); ++i)
	{
		if(nums[i] == nums[i-1])
		{
			return true;
		}
	}
	return false;
}

int main(){
	vector<int> nums= {2,14,18,22,22};

	bool result = checkDuplicate(nums);
	cout << result;

	return 0;
}