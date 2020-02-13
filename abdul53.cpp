#include<iostream>
using namespace std;

class rectangle
{
	private:
	int length;
	int breadth;
	public:
	rectangle(int l,int b);//constructors
	int getLength()
	{
		return length;
	}
	int getBreadth()
	{
		return breadth;
	}
	void setLength(int l)
	{
		length=l;
	}
	void setBreadth(int b)
	{
		breadth=b;
	}
	int area()
	{
		return length*breadth;
	}
	int perimeter()
	{
		return 2*(length+breadth);
	}
};
class cuboid:public rectangle//cuboid class is publically inherited from rectangle class
{
	private:
	int height;
	public:
	cuboid(int h);//parametirized constructors
	int getHeight()
	{
		return height;
	}
	void setHeight(int h)
	{
		height=h;
	}		
	int volume()
	{
		return getLength()*getBreadth()*height;
	}
};
int main()
{
cuboid c(5);
c.setLength(10);
c.setBreadth(7);
cout<<"Volume is"<<c.volume()<<endl;;
//cout<<c.area();
//cout<<c;
return 0;
}


















