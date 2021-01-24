#include<iostream>
using namespace std; 
 int main() {
	
	int p[5]={10,5,89,54,41};
	int *q=p;	
	cout<<"The value of array *q is :"<<*q<<endl;
	cout<<"The value of array *(q+1) is :"<<*(q+1)<<endl;
	cout<<"The value of array *(q+2) is :"<<*(q+2)<<endl;
	cout<<"The value of array *(q+3) is :"<<*(q+3)<<endl;
	cout<<"The value of array *(q+4) is :"<<*(q+4)<<endl;
	return 0;
}
