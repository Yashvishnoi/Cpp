#include<iostream>
using namespace std;

class Employee {

	public:
		int id;
		float salary;

 		Employee(int ID){
			id=ID;
			salary=4000.0; 
		}

		Employee() {}		
};

class harry : public Employee {
	 public:
	
	 harry(int ID) {
	 id=ID;
	 }
	 int languageCode = 9;
	 void getData() {
	 cout<<id<<"\n";
	 }
};

int main() {
	Employee h(1), R(2);
	cout<<h.salary<<"\n";
	cout<<R.salary<<"\n";

	harry hey(10);
	cout<<hey.languageCode<<"\n";
	cout<<hey.id<<"\n";
	hey.getData();

	return 0;
}

