/*#include<iostream>
#include<cstring>
#include<string.h>
#include<stdlib.h>
#include<string>
using namespace std;
int main()
{
string str;
cout<<"enter a string";
cin>>str;
cout<<str<<endl;
return 0;
}*/

// IT USES cin



#include<iostream>
#include<cstring>
#include<string.h>
#include<stdlib.h>
#include<string>
using namespace std;
int main()
{
string str;
cout<<"enter a string";
getline(cin,str);
cout<<str<<endl;
return 0;
}
