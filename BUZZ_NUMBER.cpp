// A buzz number is either divisible by 7 or ends with 7. 

#include<iostream>
using namespace std;

bool checkBuzz (int n) {
return (n% 10 ==7|| n%7 == 0);
}

int main() {
	int n1=49,n2=11; // 49 is a buzz number 11 isn't a buzz number
	if(checkBuzz(n1)) {
		cout<<"number one (n1) "<<"is a buzz number "<<"\n";
	}
	else {
		cout<<"n1 "<<"isn't a buzz number"<<"\n";
	}
		if(checkBuzz(n2)) {
		cout<<"number two (n2) "<<"is a buzz number "<<"\n";
	}
	else {
		cout<<"n2 "<<"isn't a buzz number"<<"\n";
	}
	return 0;
}
