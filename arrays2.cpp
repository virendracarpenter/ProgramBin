// Reverse the Array 

#include <iostream>
#include <vector>

using namespace std;

void reverse(int arr[], int n)
{
	for(int i = 0, j = n-1; i < n/2; i++, j--)
	{
		swap(arr[i], arr[j]);
	}
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7};
	int n = sizeof(arr)/sizeof(arr[0]);

	reverse(arr, n);
	for(int x: arr){
		cout << x << ", ";
	}
	cout << endl;

	vector<int> result;
	result.push_back
	return 0;
}
