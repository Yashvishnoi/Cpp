#include<iostream>
#include<fstream>// we have to include header file
using namespace std;
int main()
{
ofstream ofs("My.txt");
ofs<<"John";
ofs<<25;
ofs<<"cs";
ofs.close();
return 0;
}
