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
cout<<str.capacity()<<" "<<str.length()<<endl;
str.append("Enough");
cout<<str<<endl;
cout<<str.capacity()<<" "<<str.length()<<endl;
return 0;
}
