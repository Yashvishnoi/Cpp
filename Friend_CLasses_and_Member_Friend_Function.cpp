#include<iostream>
using namespace std;

class Complex;

class Cal {
	public:
	
	int sum (int a,int b){
		return (a+b);
	}
	
	int ComplexSum(Complex o1, Complex o2);

};

class Complex {
	private:
	int a,b;
	public:

	// Indiviually making friend of class	
	//friend int Cal::ComplexSum (Complex o1, Complex o2);
	
	// Alter , to make whole Cal class as friend
	friend class Cal; 
	
	void SetNumber(int n1, int n2) {
		a=n1;
		b=n2;
	}
	
	int GetNumber () {
		cout<<a<<" + "<<b<<"i\n";
	}

	
}; 
	
	int Cal:: ComplexSum(Complex o1, Complex o2) {
		return (o1.a+o2.a);
	}


int main() {
Complex o1, o2;
o1.SetNumber(1,5);
o2.SetNumber(2,7);
Cal ca;
int sum = ca.ComplexSum(o1,o2);
cout<<"Sum of real part of complex number is : "<<sum<<"\n";
return 0;
}
