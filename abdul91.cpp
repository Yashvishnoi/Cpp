#include<iostream>
#include<fstream>// we have to include header file
using namespace std;
int main()
{
ofstream ofs("My.txt");//for writting into a file there is a class available ofstream
ofs<<"John";
ofs<<25;
ofs<<"cs";
ofs.close();
return 0;
}
