#include<iostream>
#include<cstring>
#include<string.h>
#include<stdlib.h>
#include<string>
using namespace std;
int main()
{
string str1;
string str2;
cout<<"write the string";
getline(cin,str1);
getline(cin,str2);
//str.erase();//used to erase all the inputs
//str.push_back('z');//used to add a single word at last
//str.pop_back();//it is not working in this compiler but it is used to remove one word from end
str1.swap(str2);//swapping two numbers
cout<<str1<<endl;
cout<<str2<<endl;
//cout<<str.capacity()<<" "<<str.length()<<endl;
return 0;
}
