#include<iostream>
using namespace std;

int main(){
	int v[] = {1 , 4, 7, 8, 9};
	for(auto& x: v){
		cout<<x << "{" << &x << "}" <<"-> ";
		++x;
	}
	cout << "None";
	return 0;
}
