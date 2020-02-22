#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class student
{
  public:
  string name;
  int roll;
  string branch;
};

int main()
{

  student s1;
  cout<<"Enter your name"<<endl;
  cin>>s1.name;
  cout<<"Enter your roll number"<<endl;
  cin>>s1.roll;
  cout<<"Enter your branch"<<endl;
  cin>>s1.branch;

  ofstream outfile;
  outfile.open("student.txt");
  outfile<<s1.name<<endl;
  outfile<<s1.roll;
  outfile<<s1.branch;

  outfile.close();

  ifstream infile;
  infile.open("student.txt");
  infile>>s1.name;
  infile>>s1.roll;
  infile>>s1.branch;

  cout<<s1.name<<endl;
  cout<<s1.roll<<endl;
  cout<<s1.branch<<endl;

  infile.close();
return 0;

}
