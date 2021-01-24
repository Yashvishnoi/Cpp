#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int a=1, b=27, c=368;
	cout<<"The value of a without setw is :"<<a<<"\n";
	cout<<"The value of b without setw is :"<<b<<"\n";
	cout<<"The value of c without setw is :"<<c<<"\n";

	cout<<"The value of a with setw is :"<<setw(4)<<a<<"\n";
	cout<<"The value of b with setw is :"<<setw(4)<<b<<"\n";
	cout<<"The value of c with setw is :"<<setw(4)<<c<<"\n";
	
	return 0;
}
