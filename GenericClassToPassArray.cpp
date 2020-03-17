#include<iostream>
using namespace std;

template<class t>
class array
{
t *ptr;
int size;
public:
array(t arr[], int s);
void print();
};

template<class t>
array<t>::array(t arr[],int s)
{
ptr=new t[s];
size=s;
for(int i=0;i<size;i++)
ptr[i]=arr[i];
}

template<class t>
void array<t>::print()
{
for(int i=0;i<size;i++)
cout<<" "<<ptr[i];
cout<<endl;
}

int main()
{
int arr[5]={1,2,3,4,5};
array<int> a(arr,5);
a.print();
return 0;
}
