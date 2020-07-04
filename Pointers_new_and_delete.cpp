#include<iostream>
using namespace std;
int main() {
	int a=4;
	int *ptr= &a;
	cout<<"The value of a is "<<*(ptr)<<"\n";
	
	// new keyword 
	int *p = new int(410);
	cout<<"The value at address p s "<<*(p)<<"\n";
	return 0;
}
