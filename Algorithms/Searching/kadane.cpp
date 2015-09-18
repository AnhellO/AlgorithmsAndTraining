#include <iostream>
#include <vector>
using namespace std;

int kadane(vector<int> arr){
	/**
	 * Take a vector and return the max sum of contiguous subarray
	 * Complexity O(n)
	 * Doesn't work if the vector has only negative numbers
	 **/
	 
	int max_so_far = 0, max_here = 0;
	
	for(int i = 0 ; i < arr.size() ; i++){
		max_here = max_here + arr[i];
		if(max_here < 0){
			max_here = 0;
		}
		if(max_so_far < max_here){
			max_so_far = max_here;
		}
	}
	
	return max_so_far;
}

int main() {
	vector<int> a(10);
	a.push_back(3);
	a.push_back(-2);
	a.push_back(5);
	a.push_back(4);
	a.push_back(-12);
	a.push_back(7);
	a.push_back(13);
	a.push_back(-4);
	a.push_back(6);
	a.push_back(12);
	cout << kadane(a) << '\n';
	return 0;
}