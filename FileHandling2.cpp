#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

int main()
{
string line;
ofstream ofile;
ofile.open("Sample1.txt");

while(ofile)
{
getline(cin,line);
if(line=="-1")
break;
ofile<<line;
}
ofile.close();
return 0;
}
