#include<iostream>

template <typename elementType>
class SampleClass{
	public:
		elementType element;
		
		SampleClass(elementType element){
			this->element = element;
		}

		elementType readElement(){
			return 0.1*element;
		}
};

int main(){
	SampleClass <double> s(3.1);
	std::cout << s.readElement();
	return 0;
}
