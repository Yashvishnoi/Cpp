#include<iostream>
#include<string.h>
using namespace std;
 class employee
{
 private: 
 char name[10];
 int wage;

 public:
 void setname(char *n);
 void getname(char *n);
 void setwage(int w);
 int getwage();

};
void employee::setname(char *n)
{
 strcpy(name,n);
}

void employee::getname(char *n)
{
 strcpy(n,name);
}

void employee::setwage(int w)
{
 wage=w;
}

int employee::getwage()
{
 return wage;
}


int main()
{
 employee obj;
 char name[10];
 obj.setname("Yash Baba");
 obj.setwage(7500);
 obj.getname(name);
 cout<<name<<endl;
 cout<<obj.getwage()<<endl;
return 0;
}
















