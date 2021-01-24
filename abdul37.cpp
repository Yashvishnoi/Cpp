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
str.replace(3,4,"kk");//3=at which index! 4=how many letters ! kk=what is to be replaced
cout<<str<<endl;
cout<<str.capacity()<<" "<<str.length()<<endl;
return 0;
}
