#include<iostream>
using namespace std;
int main()
{
int source,target;
int *m;
source=10;
m=&source;
target=*m;
cout<<target<<endl;
return 0;
}
