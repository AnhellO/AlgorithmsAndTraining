#include <cstdio>
#include <queue>
using namespace std;
/*
* @author: Angel Santiago Jaime Zavala
* @version: 1.0.1
* Taken from "The Algorithm Design Manual by Steven S. Skiena, pag: 120 - 123"
*/
void merge(int s[], int low, int middle, int high) {
	int i;
	queue<int> buffer1, buffer2; //Temporary buffer for the sub-arrays, this way we avoid
	//the overwriting of the original array while merging
	//printf("Low: %d, Middle: %d, High: %d\n", low, middle, high);
	for(i = low ; i <= middle ; i++) {
		buffer1.push(s[i]);
		//printf("%d ", s[i]);
	}
	for(i = middle + 1 ; i <= high ; i++) {
		buffer2.push(s[i]);
		//printf("%d ", s[i]);
	}
	
	i = low;
	while(!(buffer1.empty() || buffer2.empty())) {
		if(buffer1.front() <= buffer2.front()) {
			s[i++] = buffer1.front();
			buffer1.pop();
		} else { //Inversion in MergeSort
			s[i++] = buffer2.front();
			buffer2.pop();
		}
	}
	//Dequeue the remaining elements in each buffer and add them to the original array
	while(!buffer1.empty()) {
		s[i++] = buffer1.front();
		buffer1.pop();
	}
	while(!buffer2.empty()) {
		s[i++] = buffer2.front();
		buffer2.pop();
	}
	//printf("\n");
}
//Divide and conquer example in Merge Sort
void mergesort(int s[], int low, int high) {
	int i, middle;
	//Keep partitioning the array and sub-arrays, until you get sub-arrays of size one (Recursively)
	if(low < high) {
		middle = (low + high) / 2;
		mergesort(s, low, middle); 
		//After all the partitioning, start merging each sub-array
		//mergesort(s, middle + 1, high);
		merge(s, low, middle, high);
	}
}


int main() {
	int n;
	scanf("%d", &n);
	int arr[n];
	printf("Testing MergeSort for a given n. O(nlogn) complexity.\nUnsorted elements:\n");
	for(int i = 0 ; i < n ; i++) {
		scanf("%d", &arr[i]);
	}
	for(int i = 0 ; i < n ; i++) {
		printf("%d ", arr[i]);
	}
	mergesort(arr, 0, n - 1);
	printf("\n\nSorted elements:\n");
	for(int i = 0 ; i < n ; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
