#include<iostream>
#include<string.h>

using namespace std;

template<class t1, class t2>
class myclass
{
	private:
	t1 a;
	t2 b;
	public:
	myclass(t1 x , t2 y)
	{
		a=x;
		b=y;
	}

	void show()
	{
		cout<<"\n" <<a<<"\n"<<b;
	}
};

int main()
{
	myclass<int , float> obj1(10,20.3);
	myclass<char , string>obj2('A',"I am yash baba");
	obj1.show();
	obj2.show();
return 0;
}
