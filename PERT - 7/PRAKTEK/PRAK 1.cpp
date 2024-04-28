#include <iostream>
using namespace std;

int main(){
	//deklarasi variabel
	int Nilai [20];
	int Posisi[20];
	int i, n, Bil, jmlh=0;
	bool ketemu;
	
	cout << "Masukkan Jumlah Deret Bilangan = ";
	cin >> n;
	cout << endl;
	
	//membaca elemen array
	for(i=0; i<n; i++)
	{
		cout << "Nilai Bilangan ke-"<<i<<" = ";
		cin >> Nilai[i];
	}
	
	//mencetak elemen array
	cout << "\n\Deret Bilangan = ";
	for(i=0; i<n; i++)
	cout << Nilai[i] <<" ";
	
	cout << "\n\nMasukkan Bilangan Yang Akan Dicari = ";
	cin >> Bil;
	
	//melakukan pencarian
	for(i=0; i<n; i++)
	{
		if(Nilai [i] == Bil)
		{
			ketemu = true;
			Posisi [jmlh]=i;
			jmlh++;
		}
	}
	if (ketemu)
	{
		cout << "BIlangan   " <<Bil<<   "ditemukan sebanyak" <<jmlh;
		cout << "\nPada Posisi ke = ";
		for(i=0; i<jmlh; i++)
		cout << Posisi[i] <<" "; 
	}
	else
	cout << " Maaf, Bilangan " <<Bil<< " Tidak Ditemukan ";
	getchar();
}
