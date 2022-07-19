// maximum and minimum element in an array

#include <iostream>

using namespace std;

struct Pair
{
	int min;
	int max;
};

Pair getMinMax(int arr[], int n){
	struct Pair minmax;
	int i;

	if(n == 1){
		minmax.min = arr[0];
		minmax.max = arr[0];
		return minmax;
	}
	minmax.min = arr[0];
	minmax.max = arr[0];
	for (int i = 1; i < n-1; ++i)
	{
		minmax.max = max(max(arr[i], arr[i+1]), minmax.max);
		minmax.min = min(min(arr[i], arr[i+1]), minmax.min);
	}
	return minmax;
}

int main(){
	int arr[] = {2, 343, 22, 43, 23, 7, 8, 0, -23, -22, 344};
	int n = sizeof(arr)/sizeof(arr[0]);

	struct Pair minmax =  getMinMax(arr, n);

	cout <<minmax.min << endl;
	cout <<minmax.max << endl;

	return 0;
}