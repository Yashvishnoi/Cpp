#include<iostream>
using namespace std;

class base
{
 private:
 int a;
 int b;

 public: 
  friend int sum (base n);
  void setValue(int i,int j);

};
// Sum is not a member function of a class

int sum(base n)
{

 // sum is a friend function so it can directly access a and b

 return n.a+n.b;
}
void base::setValue(int i,int j)
{
 a=i;
 b=j;
}
int main()
{
<<<<<<< HEAD
base obj;
obj.setValue(10,20);

sum(obj);
cout<<sum(obj)<<endl;
=======
 base obj;
 obj.setValue(10,20);
 sum(obj);
 cout<<sum(obj)<<endl;
>>>>>>> ee90d61b8e8a1116085e42e73435ad94e51110f5
return 0;
}
