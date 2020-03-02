#include<iostream>
using namespace std;

class pow
{
private:

int x;

public:

pow()//Non parameterized constructor
{
x=0;
}

pow(int i)//Parameterized constructor
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
pow p1[]={1,12,123,1234,12345};// initialized 
pow p2[5];// Non-initialized
pow *p;
int i;

// show pow of p1
for(i=0;i<5;i++)
{
cout<<"Through parameterized constructor"<<p1[i].get()<<"\n";
}
 //set pow of p2
p2[0].set(1);
p2[1].set(18);
p2[2].set(19);
p2[3].set(15);
p2[4].set(100);

// show pow of p2
for(i=0;i<5;i++)
{
cout<<"Non parameterized constructor "<<p2[i].get()<<"\n";
}

//dynamically allocate an array
p=new pow[5];

// initialize dynamic array with pow of p1
for(i=0;i<5;i++)
{
p[i].set(p1[i].get());
}

// show powers of p1

for(i=0;i<5;i++)
{
cout<<"When memory is dynamically allocated "<<p[i].get()<<"\n";
}
// Deallocating memory
delete [] p;

return 0;
}






