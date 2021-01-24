#include<iostream>
using namespace std;

class Complex {
	private:
	int a,b;
	public:
	void SetNumber(int n1, int n2) {
		a=n1;
		b=n2;
	}
	friend Complex AddNumber(Complex o1, Complex o2);
	int GetNumber () {
		cout<<a<<" + "<<b<<"i\n";
	}

	
}; 

Complex AddNumber(Complex o1, Complex o2) {
	Complex n;
	n.SetNumber((o1.a+o2.a),(o1.b+o2.b));
	return n;
	
}

int main() {
	Complex o1,o2,o3;
	o1.SetNumber(1,5);
	o2.SetNumber(5,7);
	o1.GetNumber();
	o2.GetNumber();
	o3=AddNumber( o1, o2);
	o3.GetNumber();
	return 0;
}


