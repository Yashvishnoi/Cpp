#include<iostream>
using namespace std;
#include<string.h>
#include<fstream>

int main()
{
string line;
ifstream ifile;
ifile.open("sample1.txt");

while(ifile)
{
getline(ifile,line);

cout<<line<<endl;

}
ifile.close();
return 0;
}
