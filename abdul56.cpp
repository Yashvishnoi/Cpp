#include<iostream>
#include<string>
using namespace std;


 class employee
{
	private:
	int eid;
	string name;
	public:
	employee(int e,string n)
	{
		eid=e;
		name=n;
	}
	int getEmployeeeID()
	{
		return eid;
	}
	string getName()
	{
		return name;
	}
};


class fulltimeemployee:public employee
{
	private:
	int salary;
	public:
	fulltimeemployee(int e,string n,int s):employee(e,n)
	{
		salary=s;
	}	
	int getSalary()
	{
		return salary;
	}
};

class parttimeemployee:public employee
{
	private:
	int wage;
	public:
	parttimeemployee(int e,string n,int w):employee(e,n)
	{
		wage=w;
	}
	int getWage()
	{
		return wage;
	}
};


int main()
{
parttimeemployee p1(1,"jonny",50000);
fulltimeemployee p2(2,"baba",1000);
cout<<"salary of"<<p2.getName()<<"is"<<p2.getSalary()<<endl;
cout<<"Daily wage of"<<p1.getName()<<"is"<<p1.getWage()<<endl;
return 0;
}

