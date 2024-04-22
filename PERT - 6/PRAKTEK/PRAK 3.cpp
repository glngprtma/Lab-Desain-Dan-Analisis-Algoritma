#include <iostream>
#include <string>

using namespace std;
class hewan {
	public:
		virtual void bersuara () {
			cout << "..." << std::endl;
		}
};

class Kucing : public hewan {
	public:
		void bersuara (){
			cout << "meow" << std::endl;
		}
};

class kambing : public hewan {
public :
	void bersuara() {
		std::cout << "mbekk" << std::endl;
	}
};

int main () {
	hewan *h1 = new Kucing();
	hewan *h2 = new kambing();
	
	h1->bersuara();
	h2->bersuara();
	
	return 0;
}
