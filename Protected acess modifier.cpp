#include<iostream> 
using namespace std;

class base {
	int a;
	protected :
		int b;
	public:
		void SetB(int);
		void SetA(int);
};

void base :: SetB(int B) {
	b=B;
}

void base :: SetA(int A) {
	a=A;
}

class derived : p

int main() {

	return 0;
}
