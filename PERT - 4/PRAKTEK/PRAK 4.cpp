#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
	public:
		Mahasiswa (string nama, int umur)
		:nama_(nama), umur_(umur){
			cout << "constructor Mahasiswa " << endl;
		}
		~Mahasiswa(){
			cout << "== Contoh Destructor Mahasiswa ==" << endl;
		}
		void tampilkanBiodata(){
			cout <<"nama : " << nama_ << endl;
			cout << "umur : " << umur_ << endl;
		}
		
		private:
			string nama_;
			int umur_;
};

int main(){
	{
	Mahasiswa mhs("katarina", 20);
	mhs.tampilkanBiodata();
}
return 0;
}
