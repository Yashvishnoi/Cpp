// This ambiguity will resolve automatically

# include<iostream>
using namespace std; 

class B {
	public:
		void say () {
			cout<<"Hello Coder !! "<<"\n";
		}
};

// D's new say() method will override base classes say() method . 

class D : public B {
	public:
		  void say () {
			cout<<"Hello Coder how's going on ? "<<"\n";
		} 
};

int main() {
	B b;
	b.say();
	
	D d;
	d.say ();
	return 0;
}
