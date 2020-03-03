#include<iostream>
using namespace std;
 class fun
{
public:
int n[100],i=0;
int function(int x)
{
for(int k=x;k>0;k=k/2)
{
n[i++]=k%2;
}
for(int j=i-1;j>=0;j--)
cout<< n[j];
}	
};

int main()
{
fun f;
f.function(7);
return 0;

}
