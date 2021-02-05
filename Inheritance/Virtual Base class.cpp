#include<iostream>
using namespace std ;

class student {
	protected :
		int roll_no;
	public:
		void set_number(int n) {
			roll_no= n;
		}
		void print_number () {
			cout<<"Your roll number is  : "<<roll_no<<" \n";
		}
};

class Test : virtual public student{
	protected :
		float maths, physic;
	public:
		void set_marks (float m1, float m2) {
			maths=m1;
			physic=m2;
		}
		void print_marks () {
			cout<<"The marks in math and physic are "<<"\n"<<maths<<"	&	"<<physic<<" \n";
		}
};

class sports :virtual public student {
	protected :
		float score;
	public :
		void set_score (float sc) {
			score=sc;
		}
		void print_score () {
			cout<<"The score is "<<score<<" \n";
		}
};


class result  : public Test , public sports {
	private :
		float total;
	public:
		void display(void) {
			total = maths + physic + score;
			print_number();
			print_marks();
			print_score();
			cout<<"Your total score is "<<total<<endl;	
		}
};


int main() {
	result harry;
	harry.set_number(500077601);
	harry.set_marks(10.8 , 80.5);
	harry.set_score(52.8);
	harry.display();
	return 0;
}



