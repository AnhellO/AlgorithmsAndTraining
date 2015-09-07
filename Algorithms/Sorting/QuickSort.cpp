#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <cstdlib>
using namespace std;

void quickSort(int arr[], int left, int right) {
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];
 
      /* partition */
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      }
 
      /* recursion */
      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}
int main()
{
	int const MAX = 100;
    int arraySize;
 
    cout << "Enter arraySize: " << endl;
    cin >> arraySize;
    
    int a[arraySize];
    
    srand(time(0));
    
    //filling the array with randomly generated integers
	for (int i = 0; i < arraySize; i++) {
        a[i] = rand() % MAX;
    }
    
    cout << endl << endl;
    
    cout << "Array before quickSorting: " << endl;
    for (int i = 0; i < arraySize; i++) {
        cout << a[i] << " ";
    }
 	
 	cout<<endl;
 	
    quickSort(a, 0, arraySize - 1);
    
    cout << "Array after quickSorting: " << endl;
    for (int i = 0; i < arraySize; i++ ){
        cout << a[i] << " ";
    }
 
    cout << endl << endl;
 
    return 0;
}
