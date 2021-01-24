#include<iostream>
using namespace std;

class Complex{
	int a,b;
	public:
		Complex(void);
		Complex(int ,int); // Constructor declaration
		void GetValue() {
			cout<<"Your complex number is"<<a <<" + "<<b<<"i\n";	
	}
};

Complex::Complex(void) {
	a=0;
	b=0;
}  

Complex::Complex(int x , int y) { // Parameterized Constructor
	a=x;
	b=y;
} 
  
int main() {

	// Implicit Call
	Complex c1(5,7);
	c1.GetValue();

	// Explicit Call 
	Complex c2=Complex(9,7);
	c2.GetValue();

	return 0;
}
