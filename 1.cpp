#include <iostream>
using namespace std;

void swap(int arr[], int pos1, int pos2){
	int temp;
	temp = arr[pos1];
	arr[pos1] = arr[pos2];
	arr[pos2] = temp;
}
int partition (int arr[], int low, int high, int pivot){
	int i = low;
	int j = low;
	while (i <= high){
		if(arr[i] > pivot){
			i++;
		}
		else {
			swap(arr,i,j);
			i++;
			j++;
		}
	}
	return 0;
}
