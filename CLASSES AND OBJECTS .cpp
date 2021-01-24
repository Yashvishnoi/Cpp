#include<iostream>
#include<cstring>
using namespace std;

class employee {
private:
char name[80];
int salary;
public:
void putname(char *n);
void getname(char *n);
void putsalary(int s);
int getsalary();
};
 
void employee:: putname(char *n)
{
strcpy(name,n);
}
void employee:: getname(char *n)
{
strcpy(n,name);
}
void employee:: putsalary(int s){
salary=s;
}
int employee:: getsalary(){
return salary;
}
int main() {
employee e1;
char name[80];
e1.putname("Rakesh Guptaji");
e1.putsalary(30000);
e1.getname(name);
cout<<"Name of employee "<<name <<"salary is "<<e1.getsalary()<<"\n";
return 0;

}
