#include<iostream>
using namespace std;

int main()
{
cout<<"Program start"<<"\n";
try
{
cout<<"Inside the try block"<<endl;
throw 100;
cout<<"This will not execute"<<"\n";
}

catch(int i)
{
cout<<"Catch Block executed"<<endl;
cout<<"Caught an exception value : "<<i<<"\n";

}
cout<<"End"<<endl;
return 0;
}
