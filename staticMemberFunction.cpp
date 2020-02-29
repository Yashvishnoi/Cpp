#include<iostream>
using namespace std;
 class base
{

static int i;

public:
static int count;
static void init(int x)
{
i=x;
count++;
}

int display()
{
return i;
}

};

int base::count=0;
int base::i;// define i

int main()
{
base::init(99);

base x;
cout<<x.display()<<endl;// display 99
cout<<base::count<<endl;// it tells no. object is created
return 0;
}
