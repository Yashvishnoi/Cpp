#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  char data[100];
  //open a file in write mode
  ofstream outfile;
  outfile.open("file.txt");
  cout<<"Writing to a file"<<endl;
  cout<<"Enter your name"<<endl;
  cin.getline(data,100);
  //write inputted data into a file
  outfile<<data<<endl;
  cout<<"Enter your Age";
  cin>>data;
  cin.ignore();
  ////again write inputed data into a file
  outfile<<data<<endl;
  //close the open file
  outfile.close();
  // open a file in read mode
  ifstream infile;
  infile.open("file.txt");
  cout<<"Reading from the file"<<endl;
  infile>>data;
  //write the data at the screen
  cout<<data<<endl;
  //again read the data from the file & display it
  infile>>data;
  cout<<data<<endl;
  // close the opened file
  infile.close();	
  return 0;
}
