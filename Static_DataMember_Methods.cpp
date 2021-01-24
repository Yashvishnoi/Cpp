#include<iostream>
using namespace std;
class employee {
	private: 
	int id;	
	static int count;
	public:
	void setData(void) {
		cout<<"Enter the Id number :"<<"\n";
		cin>>id;
		count++;
	}
	void getData(void) {
		cout<<"The entered id of a person is :"<<id<<"\n";
	}
	static void getCount(void) {
	cout<<"The count number is :"<<count<<"\n";
	}
	
};
// Static function only access static data member

int employee::count;//Default value =0
// Count is the static data member of the employee
int main() {
	employee harry,ravish;

	harry.setData();
	harry.getData();
	employee::getCount();

	ravish.setData();
	ravish.getData();
	employee::getCount();
	
	return 0;
}
