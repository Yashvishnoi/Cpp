#include<iostream>
using namespace std;

int main()
{
int x,y,z;
cout<<"Enter the values of x,y"<<endl;
cin>>x>>y;
try
{
if(y==0)
//throw 1://(i)   //instead of 1 i acn throw any value
//throw 1.5;//(ii)
throw string("Div by zero"); //(iii)

z=x/y;
cout<<x<<endl;
}
//catch(int e)   //(i)
//catch(double e) //(ii)
catch (string e)//(iii)
{
cout<<"Divison by zero \t"<<e<<endl;
}
cout<<"Bye"<<endl;
return 0;
}
