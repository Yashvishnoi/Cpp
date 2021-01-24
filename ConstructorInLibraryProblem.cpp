#include<iostream>
#include<string.h>
using namespace std;

class book
{
  char name[80];
  char author[80];
  int status;

  public:

  book(char *n, char *a, int s);
  void setStatus(int s)
  {
    status=s;
  }

  int getStatus()
  {
    return status;
  }

  void show();
};


book ::book(char *n, char *a, int s)
{
  strcpy(name ,n);
  strcpy(author ,a);
  status=s;
} 

void book::show()
{
  cout<<name<<" "<<"written by "<<author<<" ";
  if(status==0)
  cout<<"Available"<<endl;
  else
  cout<<"Out of stock"<<endl;
}

int main()
{
  book b1("Complete reference of c++","Herbert Schildt",0);
  book b2("Let us c","Yashwasnt khera",1);
  b1.show();
  b2.show();
return 0;
}
