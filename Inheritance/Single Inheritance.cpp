#include<iostream>
using namespace std;

class base {
	int data1;
	public:
		int data2;
		void setData();
		int getData1();
		int getData2();
};

void base :: setData(void) {
	data1 = 10;
	data2 = 20;
}

int base :: getData1() {
	return data1;
}

int base :: getData2() {
	return data2;
}

class Derived : private base {
	int data3;
	public:
		void process();
		void display();
};

void Derived :: process () {
	setData();
	data3 = data2 * getData1();
}

void Derived :: display() {
	cout<<"Value of data 1 is "<<getData1()<<"\n";
	cout<<"Value of data 2 is "<<data2<<"\n";
	cout<<"Value of data 3 is "<<data3<<"\n";
	
	
}

int main() {
  Derived der;
  // der.setData(); it cannot be accessed by privately 
  der.process();
  der.display();
	return 0;
}
