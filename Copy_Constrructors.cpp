#include<iostream>
using namespace std;

class Number {

	int x;

	public:

		Number();// Default constructor

		Number(int n) { // Parameterized Constructor
			x=n;
		}	

// If copy construcor is also not there then also the program works because the compr=iler supplies its own Copy constructor

		Number (const Number &obj ) { // Copy constructor
		x=obj.x;
			cout<<"Copy constructor called ";
		}

		void display(){
		cout<<"The value of  number is : "<<x<<" \n";
	}

};

int main() {

	Number n(8) ;
	n.display();

	Number n1(n);
	n1.display();
	
	Number n2 = n; // Copy consructor called
	n.display();	

	

	return 0;
}
