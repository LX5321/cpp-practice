#include<iostream>

int main(){
	int v = 10;
	std::cout << v << " @ " << &v << std::endl;
	v = 1;
	std::cout << v << " @ " << &v << std::endl;
	return 0;
}       
