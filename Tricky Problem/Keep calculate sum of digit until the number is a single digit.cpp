// example: 457--> 4+5+6+7 = 22 --> 2+2 =4                                          

#include<iostream>
using namespace std;

int main() {
	int number;
	int result;
	cout<<"Number \n";
	cin>>number;
	
	if(number) {
		result = number%9==0 ? 9 : number%9;		
	}
	// if number is divisible by 9 --> result = 9, else --> result = number %9

	else {
		result= 0;
	}
	cout<<"Result :"<<result<<"\n";
	
	return 0;
}
