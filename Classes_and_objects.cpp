#include<iostream>
using namespace std;

class employee {
	private:
	int salary,sapId,age;		
	public :
	void putData(int a1, int b1,int c1);
	int getData();
};

void employee :: putData (int a1, int b1,int c1) {
	salary=a1;
	sapId=b1;
	age=c1;	

}

int employee :: getData() {
	cout<<"The sap-id of a person is :"<<sapId<<"\n";
	cout<<"The salary of a person is :"<<salary<<"\n";
	cout<<"The age of a person is :"<<age<<"\n";
	return 0;
}

int main() {
	employee Gopal;
	Gopal.putData(6000, 500077601, 22);
	Gopal.getData();
	return 0;
}
