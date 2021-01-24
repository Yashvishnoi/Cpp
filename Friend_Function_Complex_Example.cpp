
// In this we will swap the value of both the class C1 & C2

#include<iostream>
using namespace std; 

class C2;

class C1 {
	int a;
	friend void exchange(C1 &,C2 &);
	public:
		void SetValue(int a1){
			a=a1;
		}

		void GetValue(void) {
			cout<<"Value of a "<<a<<"\n";
		}
	
};
class C2 {
	int b;
	friend void exchange(C1 & , C2 &);
	public:
		void SetValue(int b1){
			b=b1;
		}
		void GetValue(void) {
			cout<<"Value of b "<<b<<"\n";
		}
	
};

void exchange (C1 & x , C2 & y) { // If we don't use the reference operator(&) then it will not change the value because in that case it create a copy of x and y.
	int temp = x.a;
	x.a=y.b;
	y.b=temp;
}


int main() {
	C1 oc1;
	C2 oc2;
	oc1.SetValue(4);
	oc2.SetValue(5);
	exchange (oc1 , oc2);
	cout<<"The value of oc1 after exchanging ";
	oc1.GetValue();
	cout<<"The value of oc2 after exchanging ";
	oc2.GetValue();
	return 0;
}
