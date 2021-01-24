#include<iostream>
#include<string>
using namespace std;


class student
{
private:
int roll;
string name;
int mathmarks;
int chemmarks;
int phymarks;
public:
student(int r,string n,int m,int c,int p)
{
roll=r;
name=n;
mathmarks=m;
chemmarks=c;
phymarks=p;
}
int total()
{
return mathmarks+chemmarks+phymarks;
}
char grade()
{
float average=total()/3;
if(average>=60)
cout<<'A';
else if(average>=40 && average<=60)
cout<<'B';
else if(average<=40)
cout<<'C';
}
};
int main()
{
int roll;
string name;
int m,c,p;
cout<<"Enter your roll number";
cin>>roll;
cout<<"enter your name";
cin>>name;
cout<<"enter your 3 subject marks";
cin>>m>>c>>p;
student s(roll,name,m,c,p);
cout<<"Total marks"<<s.total();
cout<<"Grade"<<s.grade();
return 0;
}




















