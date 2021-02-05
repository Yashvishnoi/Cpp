#include<iostream>
using namespace std;

class B1 {
	public:
		void greet() {
			cout<<"Kaisa ho"<<"\n";
		}
};

class B2 {
	public:
		void greet() {
			cout<<"How's doing ? "<<"\n";
		}
};

class Derived : public B1 , public B2 {
	private :
		int a;
	public:
		void greet() {
			B1::greet();
		}
};

int main() {
	B1 b1;
	b1.greet();
	
	B2 b2 ;
	b2.greet();
	
	Derived d;
	d.greet();
	return 0;
}

