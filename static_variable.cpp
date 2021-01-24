#include<iostream>
using namespace std;

int product(int A, int B) {
static int c=0;
c=c+1;
return A*B+c;
}

int main() {
int a,b;
cout<<"Enter the value of a and b";
cin>>a>>b;
cout<<"The product of two number is :"<<product(a,b)<<"\n";
cout<<"The product of two number is :"<<product(a,b)<<"\n";
return 0;
}
