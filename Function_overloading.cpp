#include<iostream>
using namespace std;

int sum(int a, int b) {
	int c=a+b;
	return c;
}

int sum(int a, int b, int c) {
	int d=a+b+c;
	return d;
}
int main(){
	cout<<"The sum of 2 number 5 & 8 is : "<<sum(5,8)<<endl;	
	cout<<"The sum of 3 number 5,8 & 3 is :"<<sum(5,8,3)<<endl;
	return 0;
}

