#include<iostream>
using namespace std;
int oneval(int i)
{
return i;
}

int doubleval(int  i,int j)
{
return i*j;
}


int main()
{
cout<<"When only one value is passed "<<oneval(1)<<endl;
cout<<"When double value is passed  "<<doubleval(2,5)<<endl;
return 0;
}
