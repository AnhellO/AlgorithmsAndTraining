#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <cstdlib>
#include <cctype>
#include <bitset>
#include <sstream>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <iomanip>
#include <utility>
using namespace std;

void merge(int s[], int low, int middle, int high) {
	int i;
	queue<int> buffer1, buffer2;
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
		} else {
			s[i++] = buffer2.front();
			buffer2.pop();
		}
	}
	
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

void mergesort(int s[], int low, int high) {
	int i, middle;
	
	if(low < high) {
		middle = (low + high) / 2;
		mergesort(s, low, middle);
		mergesort(s, middle + 1, high);
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