#include <iostream>
using namespace std;

void quickSort(int arr[], int low, int high){
if (low < high){
	int pivot = arr[high];
	int pos = partition(arr, low ,high, pivot);
	
	quickSort(arr,low,pos-1);
	quickSort(arr,pos+1,high);
}
}
int main();
{
	int n;
	cout << "tentukan panjang array : ";
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
	quicksort(arr,0,n-1);
	cout<<"berikut adalah array yang telah disortir: ";
	for(int i = 0; i < n; i++){
		cout << arr [i]<<"\t";
	}
}
