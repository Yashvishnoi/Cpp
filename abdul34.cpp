#include<iostream>
#include<cstring>
#include<string.h>
#include<stdlib.h>
#include<string>
using namespace std;
int main()
{
string str;
cout<<"write the string";
getline(cin,str);
cout<<str.capacity()<<endl;
str.append("Enough");
cout<<str.capacity()<<endl;
cout<<str<<endl;
return 0;
}
