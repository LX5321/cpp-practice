#include<iostream>
using namespace std;

int main(){
	/*
	 * * - gets value stored at address
	 * & - gets address
	 *
	 * */
	int *p;
	int num1 = 5 , num2 = 8;
	p = &num1;
	cout << *p << " @ " << &p << endl;
	*p = num2;
	cout << *p << " @ " << &p << endl;
	return 0;
}
