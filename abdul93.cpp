#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  char data[100];
  ofstream outfile;
  outfile.open("file.txt");
  cout<<"Writing to a file"<<endl;
  cout<<"Enter your name"<<endl;
  cin.getline(data,100);
  outfile<<data<<endl;
  cout<<"Enter your Age";
  cin>>data;
  cin.ignore();
  outfile<<data<<endl;
  outfile.close();
  ifstream infile;
  infile.open("file.txt");
  cout<<"Reading from the file"<<endl;
  infile>>data;
  cout<<data<<endl;
  infile>>data;
  cout<<data<<endl;
  infile.close();	
  return 0;
}
