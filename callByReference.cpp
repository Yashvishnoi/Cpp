#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}


int main()
{
  int a,b;
  cout<<"Enter the values to be swapped"<<endl;
  cin>>a>>b;
  cout<<"Value of a before swapping\t"<<a<<endl<<"Value of b before swapping\t"<<b<<endl;
  swap(&a,&b);
  cout<<"Value of a after swapping\t"<<a<<endl<<"Value of b after swapping\t"<<b<<endl;
return 0;
}
