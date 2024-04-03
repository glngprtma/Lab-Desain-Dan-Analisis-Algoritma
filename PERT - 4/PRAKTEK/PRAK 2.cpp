#include <iostream>
#include <string>

using namespace std;
class pelajaran { //Class Name
public: //Access specifier
pelajaran(){ //constructor
cout << "ini adalah materi c++ tentang constructor!";
}
};
int main (){
	pelajaran obj; //membuat object dari sebuah class
	return 0;
}
