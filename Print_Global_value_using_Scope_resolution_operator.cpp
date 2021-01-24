#include<iostream>
using namespace std;
int a=45;
int main() {
	int a,b,c;
	cin>>a;
	cin>>b;
	cin>>c;
	cout<<"a="<<a<<" "<<"b="<<b<<" "<<"c="<<c<<" \n";
	cout<<"Scope resolution operator "<<::a; // it will give the Global value
	return 0;
}
