#include<iostream>
using namespace std;

void PrintArr(int arr[3]){
	for(int i=0 ; i<3 ;i++){
		cout << arr[i] << " -> ";
	}
	cout << "None" << endl;
}

int main(int argc, char const *argv[])
{
	int x[3] = {1, 2, 4};
	PrintArr(x);
	return 0;
}