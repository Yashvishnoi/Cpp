/*
#include<iostream>
using namespace std;

class parent:
{
	private:
	int a;
	protected:
	int b;
	public:
	int c;
	void funParent()
	{
		a=10;
		b=5;
		c=15;
	}
};

class child:public parent
{
	public:
	void funchild()
	{
		//a=10;//-it cannot be access because it is a private member rest all accessble
		b=5;
		c=15;
	}
};


class grandchild:public child
{
	public:
	void funGrandChild()
	{
		//a=10;//-Private member is not accessible
		b=5;
		c=15;
	}
};

int main()
{
child c;
//c.a=10;//private memeber are not accessseble
//c.b=50;//protected member are also not acceseble
c.c=40;
return 0;
}*/





/*
#include<iostream>
using namespace std;

class parent:
{
	private:
	int a;
	protected:
	int b;
	public:
	int c;
	void funParent()
	{
		a=10;
		b=5;
		c=15;
	}
};

class child:protected parent
{
	protected:
	public:
	void funchild()
	{
		//a=10;//-it cannot be access because it is a private member rest all accessble
		b=5;
		c=15;
	}
};


class grandchild:public child
{
	public:
	void funGrandChild()
	{
		//a=10;//-Private member is not accessible
		b=5;
		c=15;
	}
};

int main()
{
//child c;
//c.a=10;//private memeber are not accessseble
//c.b=50;//protected member are also not acceseble
//c.c=40;//we cannot access because this child class is inheriting protectely
return 0;
}*/










#include<iostream>
using namespace std;

class parent
{
	private:
	int a;
	protected:
	int b;
	public:
	int c;
	void funParent()
	{
		a=10;
		b=5;
		c=15;
	}
};

class child:private parent
{
	private:
	protected:
	public:
	void funchild()
	{
		//a=10;//-it cannot be access because it is a private member rest all accessble
		b=5;
		c=15;
	}
};


class grandchild:public child
{
	public:
	void funGrandChild()
	{
		//a=10;//-Private member is not accessible
		//b=5;//it cannot access because it become privately
		//c=15;//it cannot access because it become privately
	}
};

int main()
{
//child c;
//c.a=10;//private memeber are not accessseble
//c.b=50;//protected member are also not acceseble
//c.c=40;//we cannot access because this child class is inheriting protectely
return 0;
}























































