#include<iostream>
using namespace std;

template <class T>
T abc(T a, T b, T c){
	return a+b+c;
}

template <class NewClass>
NewClass newClassFunction(NewClass a, NewClass b){
	return 10*(a+b);
}

int main(int argc, char const *argv[])
{

	cout << abc <float> (1, 2, 4) << endl;
	cout << newClassFunction <float> (24, 14.2) << endl;
	return 0;
}