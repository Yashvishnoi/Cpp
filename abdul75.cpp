#include<iostream>
using namespace std;
class myexception1: exception
{
};
class myexception2:myexception1
{
};
int main()
{
try 
{
//throw 1;//(i)
//throw 1.5;//(ii)
//throw 'A';//(iii)
//throw 1.5f;//(iv)//if catch block is not available for float then it will execute all catch block
throw myexception1();
}
catch(int e)//(i)
{
cout<<"INt catch"<<endl;
}
catch(double e)//(ii)
{
cout<<"Double catch"<<endl;
}
catch(char e)//(iii)
{
cout<<"Char catch"<<endl;
}
catch(myexception2 e)//we have to use exception of child class first then parent class
{
cout<<"My exception 2"<<endl;
}
catch (myexception1 e)
{
cout<<"myexception 1"<<endl;
}
catch(...)//(iv)//it must be last because it can hold all exception if you use this type of catch then you are not interested to know about exception
{
cout<<"All catch"<<endl;
}
return 0;
}
