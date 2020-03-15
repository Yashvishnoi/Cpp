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
return 0;
}

