#include<iostream>
#include<cstring>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
char s1[10]={"245"};
char s2[10]={"54.78"};
long int x=strtol(s1,NULL,10);
float y=strtof(s2,NULL);
cout<<x<<endl<<y<<endl;
return 0 ;
}
