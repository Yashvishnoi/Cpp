#include<iostream>
using namespace std;
int myval(int i)
{
return i;
}

double myval(double i)
{
return i;
}


int main()
{
cout<<"When intval function is called "<<myval(1)<<endl;
cout<<"When doubleval function is called "<<myval(1.5)<<endl;
return 0;
}
