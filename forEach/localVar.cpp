#include <iostream>
using namespace std;

class myClass
{
public:
	int a = 0;
	myClass(int a){
		this->a = a;
	}
	void printA(){
		cout << "\nA: " << a << endl;
	}
	
};


int main(int argc, char const *argv[])
{
	myClass m(2);
    m.printA();
	return 0;
}