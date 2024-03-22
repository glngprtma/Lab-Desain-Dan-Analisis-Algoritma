#include <iostream>
using namespace std;

int main(){
	int i,arr[3],j,tampung;
	cout <<"masukkan angka : ";
	for(i = 0;i < 4; i++){
		cin >> arr[i];
	}
	cout << endl;
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < (4-i-1); j++){
			if(arr[j] > arr[j + 1]){
				tampung = arr[j];
				arr[j = arr[j+ 1]];
				arr[j + 1] = tampung;
			}
		}
		cout << "tahap" << i + 1 << ":";
		for(j = 0;j < 4; j++){
			cout << arr[j] <<"";
		}
		cout << endl;
	}
	
	cout << endl;
	
	cout <<"hasil : ";
	
	for (j = 0;j < 4; j++){
		cout << arr[j] << " ";
	}
	
	return 0;
}

