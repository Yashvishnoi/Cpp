#include<iostream>
#include<cstring>
#include<string.h>
#include<stdlib.h>
#include<string>
using namespace std;
int main()
{
string str="Hello";
//cout<<str.length()<<endl;//to find the length of string
//cout<<str.size()<<endl;//same as lenth
//cout<<str.capacity()<<endl;//to find the max. capacity of blocks that stering made
//cout<<str.resize(30)<<endl;//max. size of the compiler
cout<<str.max_size()<<endl;
cout<<str<<endl;
return 0;
}
