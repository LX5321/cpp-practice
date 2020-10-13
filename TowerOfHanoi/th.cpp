#include<iostream>
using namespace std;

enum tower { A='A', B='B', C='C' };

void TowersOfHanoi(int n, tower x, tower y , tower z){
	if(n){
		TowersOfHanoi(n-1, x, z, y);
		cout<<"Moved top disk from tower: " << char(x) << " to " <<char(y)<<endl;
		TowersOfHanoi(n-1, z, y, x);
	}
}

int main (){
	TowersOfHanoi(3, A, B, C);
}
