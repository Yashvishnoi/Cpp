#include<iostream>
using namespace std;

class Complex{
	int a,b;
	public:
		Complex(void);
		Complex(int);
		Complex(int ,int); // Constructor declaration
		void GetValue() {
			cout<<"Your complex number is"<<a <<" + "<<b<<"i\n";	
	}
};

Complex::Complex(void) { // Default constructor
	a=0;
	b=0;
}  


Complex::Complex(int x) {
	a=x;
	b=0;
}  

Complex::Complex(int x , int y) { // Parameterized Constructor with 2 arguments
	a=x;
	b=y;
} 
  
int main() {

	// Implicit Call contain 2 arguments
	Complex c1(5,7);
	c1.GetValue();

	// Explicit Call  contain one argument
	Complex c2=Complex(9);
	c2.GetValue();
	 
	// Explicit call with no argument
	 Complex c3=Complex();
	 c3.GetValue();
	return 0;
}
