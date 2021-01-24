#include<iostream>
using namespace std;
class myexception: exception
{

};
int div(int a,int b)throw(myexception)//if you write throw() it means function is not throwing anything and it is optional not mandatory
{
if(b==0)
throw myexception();
return a/b;
}
int main()
{
int x,y,z;
cout<<"Enter the values of x,y"<<endl;
cin>>x>>y;
try
{
//if(y==0)
//throw 1://(i)   //instead of 1 i acn throw any value
//throw 1.5;//(ii)
//throw string("Div by zero"); //(iii)
//throw myexception();
z=div(x,y);
cout<<x<<endl;
}
//catch(int e)   //(i)
//catch(double e) //(ii)
catch (myexception e)//(iii)
{
cout<<"Divison by zero \t"<<endl;
}
cout<<"Bye"<<endl;
return 0;
}
