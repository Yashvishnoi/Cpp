#include<iostream>
using namespace std;

int fab(int n){
	if(n<2)
	return 1;
	else
	return fab(n-1)+fab(n-2);
}


int main() {
 	int n;
	cout<<"Enter the digit \n";
	cin>>n;
	int N=fab(n);
	cout<<N<<"\n";
	return 0;
	
}
