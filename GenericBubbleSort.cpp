#include<iostream>
using namespace std;

template<class T>
void sort(T *item,//Pointer of array to be sorted
int count)// number of items in array
{
int a,b;
T t;
for(a=1;a<count;a++)
	for(b=count-1;b>=a;b--)
		if(item[b-1]>item[b])
		{
			t=item[b-1];
			item[b-1]=item[b];
			item[b]=t;	
		}			
}

int  main()
{
int iarray[7]={10,5,2,8,9,7,4};
double darray[5]={10.5,2.2,8.3,56.2,40.2};

int i;
cout<<"Here is unsorted integer array "<<endl;
for(i=0;i<7;i++)
{
cout<<iarray[i]<<" ";
}
cout<<endl;

cout<<"Here is unsorted double array "<<endl;
for(i=0;i<5;i++)
{
cout<<darray[i]<<" ";
}
cout<<endl;

sort(iarray,7);
sort(darray,5);

cout<<"Here is sorted integer array "<<endl;
for(i=0;i<7;i++)
{
cout<<iarray[i]<<" ";
}
cout<<endl;

cout<<"Here is sorted double array "<<endl;
for(i=0;i<5;i++)
{
cout<<darray[i]<<" ";
}
cout<<endl;

return 0;
}
