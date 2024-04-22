#include <iostream>
using namespace std;

class kendaraan {
	protected:
		string merek;
		int tahunProduksi, jumlahPintu;
		
	public:
		kendaraan(string _merek, int _tahunProduksi, int _jumlahPintu) : merek(_merek), tahunProduksi(_tahunProduksi), jumlahPintu(_jumlahPintu) {}
			
		virtual void info() const = 0;
		
		void dataMobil() const {
			cout << "Merek mobil: " << merek << endl;
			cout << "Tahun produksi: " << tahunProduksi << endl;
			info();
		}
};

class mobil : public kendaraan {
	public:
		mobil(string _merek, int _tahunProduksi, int _jumlahPintu) : kendaraan(_merek, _tahunProduksi, _jumlahPintu) {}
		
		void info() const override {
		    cout << "Jumlah pintu: " << jumlahPintu << endl;
		}
};

int main () {
	string merekMobil = "BMW";
	int tahunProduksiMobil = 2004, jumlahPintuMobil = 2;
	
	mobil mobil1(merekMobil, tahunProduksiMobil, jumlahPintuMobil);
	cout << "\nInformasi mobil: " << endl;
	mobil1.dataMobil();
	
	return 0;
}

