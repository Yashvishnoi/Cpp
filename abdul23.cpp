#include<iostream>
using namespace std;
int *fun(int size)
{
int *ptr=new int [size];
for(int i=0;i<size;i++)
ptr[i]=i+1;
return ptr;
}
int main()
{
int *ptr=fun(5);
return 0;
}
