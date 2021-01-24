#include<iostream>
using namespace std;

class Y;

class X{
 int a;
 public:
 void Set(int a1)	{
		a=a1;
 }
 friend void sum (X,Y);
};
 class Y{
 int b;
 public:
 void Set(int b1){
		b=b1;
 }
 friend void sum (X,Y);
};

void sum(X o1, Y o2) {
	cout<<"Sum of Object of X and Y is :"<<o1.a+o2.b;
}


int main() {
	X a;
	a.Set(20);
	Y b;
	b.Set(20);
	sum(a,b);
	return 0;
}
