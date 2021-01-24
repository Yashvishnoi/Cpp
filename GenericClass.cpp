#include<iostream>
#include<string.h>
using namespace std;

template<class T , class U>
class myclass
{
	private:
	T X;
	U Y;

	public:
	myclass(T x1, U x2)
	{
		X=x1;
		Y=x2;
	}
void show()
	{
		cout<<" "<<X<<"\n "<<Y<<"\n";
	
	}
};

int main()
{

	myclass<int,double> obj1(10,10.2);
	myclass<char,string> obj2('Y',"I Love Budwisier");
	obj1.show();
	obj2.show();

return 0; 
}
