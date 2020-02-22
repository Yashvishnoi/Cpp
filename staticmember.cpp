#include<iostream>
using namespace std;

class rectangle
{
  private:

   int length,breadth,height;

  public:

     static int count;

    rectangle(int l,int b,int h)
  {
    length=l;
    breadth=b;
    height=h;
    count++;
  }

  int volume()
  {
    return length*breadth*height;
  }

};

int rectangle::count=0;

int main()
{
  int a,b,c;
  cout<<"Enter length,breadth,height"<<endl;
  cin>>a>>b>>c;
  rectangle r(a,b,c);
  rectangle r1(10,1,3);
  cout<<"Volume is "<<r.volume()<<endl;
  cout<<"Volume is "<<r1.volume()<<endl;
  cout<<rectangle::count<<"\t";
return 0;
}
