#include<iostream>
#include<string>
using namespace std;
class student
{
public:
int roll;
string name;
static int addno;
student(string n)
{
addno++;
roll=addno;
name=n;
}
void display()
{
cout<<"Name"<<name<<endl<<"Roll "<<roll<<endl;
}
};
int student::addno=0;
int main()
{
student s1("JOHN");
student s2("Ravi");
student s3("khan");

s1.display();
s2.display();
s3.display();
cout<<"NUMBER ADMISSION "<<student::addno<<endl;
return 0;
}
