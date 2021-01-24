#include<iostream>
using namespace std;

class Complex{
	int a,b;
	public:
		Complex(int ,int); // Constructor declaration
		void GetValue() {
			cout<<"Your complex number is "<<a <<" + "<<b<<"i\n";	
	}
};


Complex::Complex(int x , int y=8) { // Parameterized Constructor with 2 arguments
	a=x;
	b=y;
} 
  
int main() {

	// Implicit Call contain 2 arguments
	Complex c1(5,7);
	c1.GetValue();

	Complex c2(9);
	c2.GetValue();
	
	return 0;
}
