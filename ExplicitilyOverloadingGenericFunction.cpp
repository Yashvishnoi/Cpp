#include<iostream>
using namespace std;

template<typename T> 
void swaps(T &i,T &j)//call by reference//T is a generic type which is ued in place holder
{
	T temp;
	temp=j;
	j=i;
	i=temp;
}

void swaps(int &i,int &j)// overloading generic function for int 
{
	int temp;
	temp=j;
	j=i;
	i=temp;
}

int main()
{

	int a=10,b=20;
	cout<<"Values of a and b before swapped"<<a<<" "<<b<<"\n";
	swaps(a,b);
	cout<<"Values of a and b after swapped"<<a<<" "<<b<<"\n";

	float s=10.1f,g=20.1f;
	cout<<"Values of s and g after swapped"<<s<<" "<<g<<"\n";
	swaps(s,g);
	cout<<"Values of s and g after swapped"<<s<<" "<<g<<"\n";

	

return 0;
}

