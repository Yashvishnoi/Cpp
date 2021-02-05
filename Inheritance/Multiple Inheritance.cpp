//  class Derived : Visibility-mode base1 , visibility-mode base2;
#include<iostream>
using namespace std;

class Base1 {
	protected :
		int base1int;
	public:
		void set_base1int(int a){
			base1int=a;
		}
};

class Base2 {
	protected :
		int base2int;
	public:
		void set_base2int(int a){
			base2int=a;
		}
};

class Derived : public Base1 ,public Base2 { // Protected members if inherited publically then it will remain protected members
	public:
	void show() {
	cout<<"The value of Base1 "<<base1int<<"\n";
	cout<<"The value of Base2 "<<base2int<<"\n";
	cout<<"The sum of Base1+ Base2 "<<base1int + base2int<<"\n";
	
	}
};

int main() {
	Derived harry;
	harry.set_base1int(25);
	harry.set_base2int(5);
	harry.show();
	return 0;
}
