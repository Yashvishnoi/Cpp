#include<iostream>
using namespace std;

template<typename T> 
void swaps(T &i,T &j)//call by reference//T is a generic type which is ued in place holder
{
T temp;
temp=j;
j=i;
i=temp;
}

int main()
{

int a=10,b=20;
cout<<"Values of a and b before swapped"<<a<<" "<<b<<"\n";
swaps(a,b);
cout<<"Values of a and b after swapped"<<a<<" "<<b<<"\n";
float s=10.1f,g=20.1f;
cout<<"Values of s and g after swapped"<<s<<" "<<g<<"\n";
swaps(s,g);
cout<<"Values of s and g after swapped"<<s<<" "<<g<<"\n";
double q=10.1,w=20.1;
cout<<"Values of q and w before swapped"<<q<<" "<<w<<"\n";
swaps(s,g);
cout<<"Values of q and w after swapped"<<q<<" "<<w<<"\n";
char r='a',u='b';
cout<<"Values of r and u after swapped "<<r<<" "<<u<<"\n";
swaps(r,u);
cout<<"Values of r and u after swapped "<<r<<" "<<u<<"\n";
return 0;
}

