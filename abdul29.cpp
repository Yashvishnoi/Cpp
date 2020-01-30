#include<iostream>
using namespace std;
int search(int A[],int n,int key)
{
for(int i=0;i<n;i++)
if(A[i]==key)
return i;
return -1;
}
int main()
{
int A[]={1,8,9,40,56,89,3,2};
cout<<"enter the element to be found {1,8,9,40,56,89,3,2}";
int key;
cin>>key;
int index=search(A,8,key);
cout<<"search element found at index"<<index<<endl;
return 0;
}
