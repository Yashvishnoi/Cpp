#include<iostream>
#include<cstring>
#include<string.h>
#include<stdlib.h>
#include<string>
using namespace std;
int main()
{
string st={"WELCOME"};
char str[10];
st.copy(str, st.length());
cout<<str<<endl;
return 0;
}
