#include <iostream>
using namespace std;

class BangunDatar {
	protected:
		int lebar, tinggi;
		
		public:
		void setValue(int a, int b) {
			lebar = a;
			tinggi = b;
		}
};

class persegiPanjang : public BangunDatar {
	public:
		int getValue() {
			return lebar * tinggi;
		}
};

class Segitiga: public BangunDatar {
	public:
		int getValue() {
			return lebar * tinggi / 2;
		}
};

class persegi: public BangunDatar {
	public:
		int getValue() {
			return lebar * tinggi;
		}
};

int main () {
	persegiPanjang persegiPanjang;
	Segitiga segitiga;
	persegi persegi;
	
	int PPPanjang, PPLebar, SGAlas, SGTinggi, PRPanjang, PRLebar;
	
	cout << "masukkan panjang persegi panjang: "; cin >> PPPanjang;
	cout << "masukkan lebar persegi panjang: "; cin >> PPLebar;
	cout << "masukkan alas segitiga: "; cin >> SGAlas;
	cout << "masukkan tinggi segitiga: "; cin >> SGTinggi;
	cout << "masukkan panjang persegi: "; cin >> PRPanjang;
	cout << "masukkan lebar persegi: "; cin >> PRLebar;
	
	persegiPanjang.setValue(PPPanjang, PPLebar);
	segitiga.setValue(SGAlas, SGTinggi);
	persegi.setValue(PRPanjang, PRLebar);
	
	cout << "\nLuas Bangun Datar: ";
	cout << "\nLuas persegi panjang: " << persegiPanjang.getValue();
	cout << "\nLuas segitiga: " << segitiga.getValue();
	cout << "\nLuas persegi: " << persegi.getValue();
	return 0;
}
