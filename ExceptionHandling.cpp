#include<iostream>
using namespace std;

int main()
{
	cout<<"Program start"<<"\n";
	try//Start a try block
	{
		cout<<"Inside the try block"<<endl;
		throw 100;\\ //Throw an error
		cout<<"This will not execute"<<"\n";
	}

	catch(int i)//catch an error
	{
		cout<<"Catch Block executed"<<endl;
		cout<<"Caught an exception value : "<<i<<"\n";

	}
	cout<<"End"<<endl;
return 0;
}
