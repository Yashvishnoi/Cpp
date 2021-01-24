#include<iostream>
using namespace std;

class Complex{
	int a,b;
	public:
		Complex(void);
		void GetValue() {
			cout<<"Your complex number is"<<a <<" + "<<b<<"i\n";	
	}
};
 
Complex::Complex(void) {
	a=10;
	b=25;
} 
  
int main() {
	Complex c1, c2, c3;
	c1.GetValue();
	c2.GetValue();
	c3.GetValue();
	
	return 0;
}
