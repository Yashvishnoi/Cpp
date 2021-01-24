#include<iostream>
using namespace std;

int main() {
	int num, range, tab;
	cout<<"Enter a number :";
	cin>>num;
	cout<<"Enter table range :";
	cin>>range;
	cout<<"Table of "<< num <<":\n\n";
	
	for (int i=1; i<=range; i++) {
		tab = num *i;
		cout<<num <<" * "<<i<<" = " <<tab <<"\n";
	} 
	return 0;
}
