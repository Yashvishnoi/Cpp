#include<iostream>
using namespace std;
int main()
{
int i,j,A[2][3]={1,2,5,7,9,5};
int B[2][3]={1,2,5,7,9,5};
int C[2][3];
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
C[i][j]=A[i][j]+B[i][j];
cout<<endl;
}
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
cout<<C[i][j];
cout<<endl;
}
return 0;
}
