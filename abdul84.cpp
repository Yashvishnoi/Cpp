#include<iostream>
using namespace std;

#define max(x,y) (x>y?x:y) // it will give the largest of 2 number

#define msg(x) #x  //it will convert x into string

#define PI 3.1425// if you remove this line then the value of PI is 3
#ifndef PI// it means if PI value is not there then define PI as 3
	#define PI 3 
#endif

int main()
{
cout<<PI<<endl;// actually in machine code it is not PI it is 3.1425
cout<<max(10,12)<<endl;
cout<<msg(Hello)<<endl;
return 0; 
}
