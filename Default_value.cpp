#include<iostream>
using namespace std;

float pro (int a, float b=1.2){//Default argument b=1.2
return a*b;
}

int main() {
int a=101;
cout<<"The product of a*b is : "<<pro(a)<<endl;
cout<<"The product of a*b is : "<<pro(a,1.3)<<endl;

return 0;
}
