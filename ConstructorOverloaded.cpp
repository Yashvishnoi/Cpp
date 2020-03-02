#include<iostream>
using namespace std;

class pow
{
private:

int x;

public:

pow()
{
x=0;
}

pow(int i)
{
x=i;
}

void set(int i)
{
x=i;
}
int get()
{
return x;
}
};

int main()
{
pow p1[]={1,12,123,1234,12345};
pow p2[5];
pow *p;
int i;

for(i=0;i<5;i++)
{
cout<<"Through parameterized constructor"<<p1[i].get()<<"\n";
}

p2[0].set(1);
p2[1].set(18);
p2[2].set(19);
p2[3].set(15);
p2[4].set(100);

for(i=0;i<5;i++)
{
cout<<"Non parameterized constructor "<<p2[i].get()<<"\n";
}

p=new pow[5];

for(i=0;i<5;i++)
{
p[i].set(p1[i].get());
}

for(i=0;i<5;i++)
{
cout<<"When memory is dynamically allocated "<<p[i].get()<<"\n";
}

delete [] p;

return 0;
}






